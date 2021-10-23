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
    int cubeDirection{5};
    // collision
    bool collision_with_rectangle{false};
    int u_rectangle_y{rectangle_y};
    int d_rectangle_y{rectangle_y + rectangle_h};
    int l_rectangle_x{rectangle_x};
    int r_rectangle_x{rectangle_x + rectangle_w};
    int u_circle_y{circle_y - circle_radius};
    int d_circle_y{circle_y + circle_radius};
    int l_circle_x{circle_x - circle_radius};
    int r_circle_x{circle_x + circle_radius};

    SetTargetFPS(60);
    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(WHITE);
        // Collision check
        u_rectangle_y = rectangle_y;
        d_rectangle_y = rectangle_y + rectangle_h;
        l_rectangle_x = rectangle_x;
        r_rectangle_x = rectangle_x + rectangle_w;
        u_circle_y = circle_y - circle_radius;
        d_circle_y = circle_y + circle_radius;
        l_circle_x = circle_x - circle_radius;
        r_circle_x = circle_x + circle_radius;
        collision_with_rectangle = (d_rectangle_y >= u_circle_y) && (u_rectangle_y <= d_circle_y) && (l_rectangle_x <= r_circle_x) && (r_rectangle_x >= l_circle_x);
        // Collision check ends
        if (collision_with_rectangle)
        {
            DrawText("Game Over!", width/2, height/2, 20, RED);
        }
        else
        {
        // Game logic begins
        // Circle
        DrawCircle(circle_x, circle_y, circle_radius, PINK);
        if (IsKeyDown(KEY_D) && (circle_x < (width - circle_radius))) {circle_x += movementStep;}
        if (IsKeyDown(KEY_A) && (circle_x > circle_radius)) {circle_x -= movementStep;}
        if (IsKeyDown(KEY_S) && (circle_y < (height - circle_radius))) {circle_y += movementStep;}
        if (IsKeyDown(KEY_W) && (circle_y > circle_radius)) {circle_y -= movementStep;}
        // Rectangle
        DrawRectangle(rectangle_x, rectangle_y, rectangle_w, rectangle_h, RED);
        rectangle_y += cubeDirection;
        if ((rectangle_y >= (height - rectangle_h)) || (rectangle_y <= 0)) {cubeDirection = -cubeDirection;}
        // Game logic ends
        }
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