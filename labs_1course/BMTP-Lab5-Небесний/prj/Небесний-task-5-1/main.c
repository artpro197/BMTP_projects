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
        printf("\n���� ���������� - ���������.\n���������� �������� ��� � ������ ������� �� ����������� ��������.\n");
        printf("���������� ���������� ��������� ���� �������� ����� � 2020 ����. (�)\n");
    }
    if(language == 'E'){
        printf("\nThe language of interface is English.\nThe application prints the student's score in the form of a literal on a special table.\n");
        printf("The application was developed by the student of CNTU Nebesnyi Andrew in 2020. (c)\n");
    }
    switch (language){
    case 'U':
        do{
            printf("����i�� ���� ��������: ");
            scanf("%d", &score);
            if(score > 0 && score < 101){
                if(score >= 90 && score <= 100){
                    printf("A - ��������� ������ � ��������� �i���i��� �������.\n");
                }
                if(score >= 82 && score <= 89){
                    printf("B - ���� ����������, �������i ����i �������.\n");
                }
                if(score >= 75 && score <= 81){
                    printf("C - ������� �������� ��������� ������� � ��������� �i���i��� �������.\n");
                }
                if(score >= 67 && score <= 75){
                    printf("D - �������� ������, � ������� �i���i��� �������.\n");
                }
                if(score >= 60 && score <= 66){
                    printf("E - �i����i�� �i�i������� ������i��.\n");
                }
                if(score >= 35 && score <= 59){
                    printf("F - � ������i��� ��������i.\n");
                }
                if(score >= 1 && score <= 34){
                    printf("FX - � ����'������� ��������� ������.\n");
                }
            }
            else{
                printf("�� ������� ������� �i� ��� ��������. ��� ������� ���� �i���� �� ����\n� �� �i���� 100.\n");
            }
            printf("����i�� Y, ��� ������� ���������� �� ���. I����� N.\n");
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
                    printf("E - ������� ��������� ��������.\n");
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
