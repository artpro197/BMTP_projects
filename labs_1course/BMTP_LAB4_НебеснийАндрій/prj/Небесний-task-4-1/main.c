#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main()
{
 char *locale=setlocale(LC_ALL, "");
 float salary, trib_1, trib_2, trib_3, trib_4;
 unsigned char c;
 printf("������� �������� ����i� �����i� � ��������i �� �������.\n");
 printf("������ �������� i�������i� ��� ����������?\n");
 printf("���� ������ ����i�� Y;\n i����� ����-���� ������.\n");
 scanf("%c", &c);
 getchar();
 if(c=='Y' || c=='y'){
    printf("����� ������� ���� ���������� ��������� ����\n�������� ����i�� � 2020 ���i.(c)\n");
 }
 else{
    printf("I�������i� ��� ���������� ���������.\n");
 }
 printf("����i�� ����i� ��������i:\n");
 scanf("%f", &salary);
 if(salary>=0){
    printf("������. ���������� ���������:");
    trib_1=(salary*33.26)/100;
    trib_2=(salary*1.6)/100;
    trib_3=(salary*1.4)/100;
    trib_4=(salary*0.56)/100;
    printf("\n������ �� ����i����� ����� - %0.2f", trib_1);
    printf("\n������ �� ����� ���. ����������� �� ������� ������i��� - %0.2f", trib_2);
    printf("\n������ �� ����� ���. ����������� � ������� ������ �������������i - %0.2f", trib_3);
    printf("\n������ �� ����� ���. ����������� �i� �������� ������i� - %0.2f", trib_4);
    printf("\n���� ��i� �����i� (����i� �������) - %0.2f\n", trib_1+trib_2+trib_3+trib_4);
 }
 else{
    printf("���i��� ������i ���i.\n");
 }
 printf("������i�� Enter ��� ���������� ������ �������.");
 getchar();
 getchar();
 return 0;
}
