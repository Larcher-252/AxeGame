#include "raylib.h"

int main()
{
    // window dimensions
    int width{800}, height{450};
    InitWindow(width, height, "Void's window");
    // circle params
    int circle_x{width / 2}, circle_y{height / 2};
    int const circle_radius{25};
    // rectangle params
    int rectangle_x{300}, rectangle_y{0};
    int const rectangle_w{50}, rectangle_h{50};
    // movement params
    int const movementStep{5};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);

        // Game logic begins
        DrawCircle(circle_x, circle_y, circle_radius, PINK);
        DrawRectangle(rectangle_x, rectangle_y, rectangle_w, rectangle_h, RED);
        if (IsKeyDown(KEY_D) && (circle_x < (width - circle_radius))) {circle_x += movementStep;}
        if (IsKeyDown(KEY_A) && (circle_x > circle_radius)) {circle_x -= movementStep;}
        if (IsKeyDown(KEY_S) && (circle_y < (height - circle_radius))) {circle_y += movementStep;}
        if (IsKeyDown(KEY_W) && (circle_y > circle_radius)) {circle_y -= movementStep;}
        // Game logic ends
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