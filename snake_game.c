#include <stdio.h>

const int height = 20;
const int width = 50;

void game_screen(){

    for (int i=0; i < width; i++){
        
        printf("%c", 176);
        
    }

    printf("\n");

    for(int i = 0; i < height; i++){
        
        for(int j = 0; j < width; j++){

            if(j == 0){
                
                printf("%c", 176);

            }else if (j ==  width - 1){
                
                printf("%c", 176);

            }else{
                
                printf(" ");
            }

    }
    printf("\n");
    }

    for(int i=0; i < width; i++){
            printf("%c", 176);
    }
    printf("\n");
}

int main(){

    game_screen();

    return 0;
}
