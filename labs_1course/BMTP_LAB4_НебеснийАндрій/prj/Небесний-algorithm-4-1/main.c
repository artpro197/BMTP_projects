#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main()
{
   char *locale = setlocale(LC_ALL, "");
   float a, b, c, sum;
   printf("���������, ������� ��������: a, b, c\n");
   scanf("%f", &a);
   scanf("%f", &b);
   scanf("%f", &c);
   getchar();
   printf("���� �������� ���� a, b, c, �i��� ��������� ��������:");
   printf("\na=(a+b)*(a+b)");
   printf("\nb=(a-c)/b");
   printf("\nc=a-b+(a/c)");
   getchar();
   a=(a+b)*(a+b);
   b=(a-c)/b;
   c=a-b+(a/c);
   printf("\n���� sum = %0.2f", sum=a+b+c);
   getchar();
   return 0;
}
