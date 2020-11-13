#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    short int score;
    char ch;
    char language;
    printf("Enter U to choose Ukrainian, or enter E to choose English: ");
    language = getch();
    if(language == 'U'){
        char *locale = setlocale(LC_ALL, "");
        printf("\nМова інтерфейсу - Українська.\nЗастосунок виводить бал у вигляді літерала за спеціальною таблицею.\n");
        printf("Застосунок розроблено студентом ЦНТУ Небесним Андрієм в 2020 році. (с)\n");
    }
    if(language == 'E'){
        printf("\nThe language of interface is English.\nThe application prints the student's score in the form of a literal on a special table.\n");
        printf("The application was developed by the student of CNTU Nebesnyi Andrew in 2020. (c)\n");
    }
    switch (language){
    case 'U':
        do{
            printf("Введiть бали студента: ");
            scanf("%d", &score);
            if(score > 0 && score < 101){
                if(score >= 90 && score <= 100){
                    printf("A - прекрасна робота з невеликою кiлькiстю помилок.\n");
                }
                if(score >= 82 && score <= 89){
                    printf("B - вище середнього, присутнi деякi помилки.\n");
                }
                if(score >= 75 && score <= 81){
                    printf("C - загалом непогане виконання завдань з середньою кiлькiстю помилок.\n");
                }
                if(score >= 67 && score <= 75){
                    printf("D - непогана робота, з великою кiлькiстю помилок.\n");
                }
                if(score >= 60 && score <= 66){
                    printf("E - вiдповiдає мiнiмальним критерiям.\n");
                }
                if(score >= 35 && score <= 59){
                    printf("F - з можливiстю перездачi.\n");
                }
                if(score >= 1 && score <= 34){
                    printf("FX - з обов'язковим повторним курсом.\n");
                }
            }
            else{
                printf("Ви зробили помилку пiд час введення. Бал повинен бути бiльше за нуль\nй не бiльше 100.\n");
            }
            printf("Введiть Y, щоб зробити розрахунки ще раз. Iнакше N.\n");
            ch = getch();
    }while(ch == 'Y' || ch == 'y');
    break;

    case 'E':
        do{
            printf("\nEnter the score of the student: ");
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
                    printf("E - відповідає мінімальним критеріям.\n");
                }
                if(score >= 35 && score <= 59){
                    printf("F - with the possibly of re-assembly.\n");
                }
                if(score >= 1 && score <= 34){
                    printf("FX - with the obligatory repeated course.\n");
                }
            }
            else{
                printf("You made a mistake. The score must be higher then 0\nand less then 101.\n\n");
            }
            printf("Enter Y to do the operation one more time. Otherwise N.\n");
            ch = getch();
    }while(ch == 'Y' || ch == 'y');
    break;
    }

    return 0;
}
