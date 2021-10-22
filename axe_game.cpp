#include "raylib.h"

int main()
{
    int width = 350, height = 200;
    InitWindow(width, height, "Void's window");

        while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RED);
        DrawCircle(width / 2, height / 2, 25, BLUE);
        EndDrawing();
    }

    // false
    bool equal{ 4 == 9 };
    // true
    bool notEqual{ 4 != 9 };
    // true
    bool less{ 4 < 9 };
    // false
    bool greater{ 4 > 9 };
    // true
    bool lessEqual{ 4 <= 9 };
    // false
    bool greaterEqual{ 4 >= 9};
}