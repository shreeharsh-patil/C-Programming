#include <stdio.h>
#include <stdlib.h>
#include <conio.h>   // For _kbhit() and _getch()
#include <windows.h> // For Sleep()
#include <time.h>

#define WIDTH 20
#define HEIGHT 20

// Global variables for game state
int rocketX;
int score = 0;
int gameOver = 0;

// Structure to represent an asteroid
typedef struct {
    int x;
    int y;
    int active;
} Asteroid;

Asteroid asteroids[10]; // Maximum 10 asteroids on screen at once

// Function to move cursor to a specific position (prevents screen flickering)
void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// Hide the blinking cursor for a cleaner look
void hideCursor() {
    CONSOLE_CURSOR_INFO cursorInfo;
    cursorInfo.dwSize = 100;
    cursorInfo.bVisible = FALSE;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void setup() {
    rocketX = WIDTH / 2;
    score = 0;
    gameOver = 0;

    // Initialize asteroids as inactive
    for (int i = 0; i < 10; i++) {
        asteroids[i].active = 0;
    }
}

void draw() {
    gotoxy(0, 0); // Move to top-left instead of clearing screen to reduce flicker

    // 1. Draw Top Border
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");

    // 2. Draw Game Area
    for (int i = 0; i < HEIGHT; i++) {
        for (int j = 0; j < WIDTH; j++) {
            
            // Left Border
            if (j == 0) printf("#");

            // Logic to draw objects
            int printed = 0;

            // Draw Rocket
            if (i == HEIGHT - 1 && j == rocketX) {
                printf("^"); // The Rocket
                printed = 1;
            }
            
            // Draw Asteroids
            if (!printed) {
                for (int k = 0; k < 10; k++) {
                    if (asteroids[k].active && asteroids[k].x == j && asteroids[k].y == i) {
                        printf("*");
                        printed = 1;
                        break;
                    }
                }
            }

            // Draw Empty Space
            if (!printed) printf(" ");

            // Right Border
            if (j == WIDTH - 1) printf("#");
        }
        printf("\n");
    }

    // 3. Draw Bottom Border
    for (int i = 0; i < WIDTH + 2; i++) printf("#");
    printf("\n");
    
    // 4. Draw Score
    printf("Score: %d\n", score);
    printf("Controls: 'a' (Left), 'd' (Right), 'x' (Quit)");
}

void input() {
    if (_kbhit()) { // Check if a key is pressed
        char key = _getch();
        switch (key) {
            case 'a': 
                if (rocketX > 0) rocketX--; 
                break;
            case 'd': 
                if (rocketX < WIDTH - 1) rocketX++; 
                break;
            case 'x': 
                gameOver = 1; 
                break;
        }
    }
}

void logic() {
    // 1. Spawn new asteroids randomly
    if (rand() % 10 < 3) { // 30% chance per frame to spawn
        for (int i = 0; i < 10; i++) {
            if (!asteroids[i].active) {
                asteroids[i].active = 1;
                asteroids[i].x = rand() % WIDTH;
                asteroids[i].y = 0;
                break;
            }
        }
    }

    // 2. Update asteroids
    for (int i = 0; i < 10; i++) {
        if (asteroids[i].active) {
            asteroids[i].y++; // Move down
            
            // Collision Detection
            if (asteroids[i].y == HEIGHT - 1 && asteroids[i].x == rocketX) {
                gameOver = 1;
            }

            // Despawn if it hits bottom
            if (asteroids[i].y >= HEIGHT) {
                asteroids[i].active = 0;
                score += 10;
            }
        }
    }
}

int main() {
    srand(time(0)); // Seed random number generator
    hideCursor();
    setup();

    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(50); // Slow down the game loop (50ms delay)
    }

    // Game Over Screen
    system("cls");
    printf("\n\n");
    printf("     GAME OVER\n");
    printf("     Final Score: %d\n", score);
    printf("\n");
    system("pause");
    
    return 0;
}