#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale=setlocale(LC_ALL, "");
    float a = 0;
    float b = 0;
    float c = 0;
    float d = 0;
    printf("����i�� ����� �: ");
    scanf("%f", &a);
    printf("����i�� ����� b: ");
    scanf("%f", &b);
    printf("����i�� ����� c: ");
    scanf("%f", &c);
    printf("����i�� ����� d: ");
    scanf("%f", &d);
    float Result_2=0;
    if(a != b && b != c && c != d){
        printf("Result_1 = %0.1f\n", a + b + c + d);
        if(a + b == b + c){
            printf("Result_2 = %0.1f", a * b * c * d);
        }
        else{
            printf("�������� ����i�");
        }
    }
    else{
        printf("�������� ����i�");
    }
    getch();
    getch();
    return 0;
}
