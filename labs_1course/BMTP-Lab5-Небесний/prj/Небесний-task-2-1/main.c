#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char *locale=setlocale(LC_ALL, "");
    int a;
    int b;
    int c;
    int d;
    printf("����i�� ����� �: ");
    scanf("%d", &a);
    printf("����i�� ����� b: ");
    scanf("%d", &b);
    printf("����i�� ����� c: ");
    scanf("%d", &c);
    printf("����i�� ����� d: ");
    scanf("%d", &d);
    if(a != b && b != c && c != d){
        printf("Result_1 = %d\n", a + b + c + d);
    }
    if(a + b == b + c){
        printf("Result_2 = %d", a * b * c * d);
    }
    else{
        printf("�������� ����i�");
    }
    getch();
    getch();
    return 0;
}
