#include <stdio.h>
#include <stdlib.h>

int main()
{
    short int score;
    char ch;
    do{
    printf("Enter the score of the student: ");
    scanf("%d", &score);
    if(score > 0 && score < 101){
            if(score >= 90 && score <= 100){
                printf("A - exellent performance with small number of errors.\n");
            }
            if(score >= 82 && score <= 89){
                printf("B - above average some mistakes.\n");
            }
            if(score >= 75 && score <= 81){
                printf("C - overall correct fulfillment or certain significant number of errors.\n");
            }
            if(score >= 67 && score <= 75){
                printf("D - not bad, but with significant number of defects.\n");
            }
            if(score >= 60 && score <= 66){
                printf("E - satisfies minimum criteria.\n");
            }
            if(score >= 35 && score <= 59){
                printf("F - with the possibly of re-assembly.\n");
            }
            if(score >= 1 && score <= 34){
                printf("FX - with the obligatory repeated course.\n");
            }
    }
    else{
        printf("You made a mistake. The score must be higher then 0\nand less then 101.\n");
    }
    printf("Enter Y to do the operation one more time. Otherwise N.\n");
    ch = getch();
    }while(ch == 'Y' || ch == 'y');
    return 0;
}
