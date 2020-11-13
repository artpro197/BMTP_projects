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
    printf("¬ведiть число а: ");
    scanf("%d", &a);
    printf("¬ведiть число b: ");
    scanf("%d", &b);
    printf("¬ведiть число c: ");
    scanf("%d", &c);
    printf("¬ведiть число d: ");
    scanf("%d", &d);
    if(a != b && b != c && c != d){
        printf("Result_1 = %d\n", a + b + c + d);
    }
    if(a + b == b + c){
        printf("Result_2 = %d", a * b * c * d);
    }
    else{
        printf("Ќебесний јндрiй");
    }
    getch();
    getch();
    return 0;
}
