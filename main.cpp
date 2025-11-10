#include<iostream>
#include<raylib.h>

int main()
{
    const int SCREEN_WIDTH = 800;
    const int SCREEN_HEIGHT = 600;

    const int cell_size=20;

    InitWindow(SCREEN_WIDTH,SCREEN_HEIGHT,"Snake Game");
    SetTargetFPS(60);

        while(!WindowShouldClose()){
          
         BeginDrawing();

            ClearBackground(BLACK);

            for(int x=0; x<=SCREEN_WIDTH;x += cell_size){
                
                DrawLine(x,0,x,SCREEN_HEIGHT,DARKGREEN);
                
            }

            for(int y=0; y<=SCREEN_HEIGHT;y += cell_size){
                
                DrawLine(0,y,SCREEN_WIDTH,y,DARKGREEN);
                
            }

          EndDrawing();
        }

    CloseWindow();
}