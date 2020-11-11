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
    printf("Введiть число а: ");
    scanf("%f", &a);
    printf("Введiть число b: ");
    scanf("%f", &b);
    printf("Введiть число c: ");
    scanf("%f", &c);
    printf("Введiть число d: ");
    scanf("%f", &d);
    float Result_2=0;
    if(a != b && b != c && c != d){
        printf("Result_1 = %0.1f\n", a + b + c + d);
        if(a + b == b + c){
            printf("Result_2 = %0.1f", a * b * c * d);
        }
        else{
            printf("Небесний Андрiй");
        }
    }
    else{
        printf("Небесний Андрiй");
    }
    getch();
    getch();
    return 0;
}
