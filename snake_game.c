#include <stdio.h>
#include <stdbool.h>

const int height = 20;
const int width = 20;

int position_X, position_Y;
int fruit_position_X, fruit_position_Y;
int tail_position_X[100], tail_position_Y[100];
int tail;

void game_screen(){

    for (int i = 0; i < width + 2; i++){
        printf("%c", 176);
    }

    printf("\n");

    for(int i = 0; i < height; i++){

        for(int j = 0; j < width; j++){

            if(j == 0){
                printf("%c", 176);
            }

            if(i == position_Y && j == position_X){
                printf("O");
            }

            else if(i == fruit_position_Y && j == fruit_position_X){
                printf("%c", 162);
            }

            else{

                bool full_screen = false;

                for (int k = 0; k < tail; k++){

                    if(i == tail_position_Y[k] && j == tail_position_X[k]);

                        printf("o");
                        full_screen = true;
                }
            }

            if (!full_screen){
                printf(" ");
            }

            if (j ==  width - 1){
                printf("%c", 176);

            }

    }
    printf("\n");
    }

    for(int i = 0; i < width; i++){
            printf("%c", 176);

    }
    printf("\n");
}

int main(){

    game_screen();
    return 0;
}
