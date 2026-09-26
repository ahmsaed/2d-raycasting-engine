#include <raylib.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct {
    float x;
    float y;
} Player;

int grid[5][5] = {
    {1,1,1,1,1},
    {1,0,0,0,1},
    {1,0,0,1,1},
    {1,0,0,0,1},
    {1,1,1,1,1},
};


int main(void){
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){
            printf("%d", grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}