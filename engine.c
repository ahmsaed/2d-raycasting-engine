#include <raylib.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    float x;
    float y;
    float direction_x;
    float direction_y;
} Player;

int grid[5][5] = {
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,1,0,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
};

int main(void){
    Player player;
    player.x = 240;
    player.y = 150;
    player.direction_x = 1;
    player.direction_y = 1;
    InitWindow(800, 450, "Raycaster");

    while (!WindowShouldClose()){
        BeginDrawing();
        ClearBackground(RAYWHITE);
        for (int rows=0; rows<5; rows++){
            for (int cols=0; cols<5; cols++){
                if (grid[rows][cols] == 1){
                DrawRectangle(cols * 160, rows * 90, 160, 90, RED);
                }
                if(grid[rows][cols] == 0)
                DrawRectangle(cols * 160, rows * 90, 160, 90, BLACK);
            }
        }
        DrawCircle(player.x, player.y, 30, WHITE);
        DrawLine(player.x, player.y, 100 + player.direction_x, 100 + player.y, BLUE);
        if (IsKeyDown(KEY_D)){
            player.x += player.direction_x;
        }
        if (IsKeyDown(KEY_S)){ 
        player.y += player.direction_y;
        }
        if (IsKeyDown(KEY_A)){
            player.x -= player.direction_x;
        }
        if (IsKeyDown(KEY_W)){ 
        player.y -= player.direction_y;
        }
        EndDrawing();

        }
    CloseWindow();
    return 0;
}
