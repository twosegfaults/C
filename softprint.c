#include<stdio.h>

int main (){
    for (int i = 1; i <= 6, i++;){
        
        if (i == 1){
            for(int counter = 1; counter <=6;){
                printf("#");
                counter++;
            }
        }

        else if(i == 4){
            for(int counter2 = 1; counter2 <=4;){
                printf("#");
                counter2 ++;
            }
        }

        else if(i == 6) {
            break;
        }

        else {
            printf("#");
        }

    }
}