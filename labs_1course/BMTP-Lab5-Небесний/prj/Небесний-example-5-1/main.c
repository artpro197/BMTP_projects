#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned short ddmm, yy;
    system("chcp 1251 & cls");
    do{
    printf("������ ����� /��/, ����� ����� /��/, �� /����/:\n");
    scanf("%hu", &ddmm);
    ddmm<<= 8;
    scanf("%hu", &yy);
    ddmm^=yy;
    scanf("%hu", &yy);
    if(ddmm >> 8 >=1 && ddmm >> 8 <=31 && (ddmm & 0xff) >= 1 && (ddmm & 0xff) <= 12 )
    switch ( ddmm & 0xf){
       case 1: printf("%02d ���� %d ����", ddmm>>8, yy);
       break;
       case 2: printf("%02d ������ %d ����", ddmm>>8, yy);
       break;
       case 3: printf("%02d ������� %d ����", ddmm>>8, yy);
       break;
       case 4: printf("%02d ����� %d ����", ddmm>>8, yy);
       break;
       case 5: printf("%02d ������ %d ����", ddmm>>8, yy);
       break;
       case 6: printf("%02d ������ %d ����", ddmm>>8, yy);
       break;
       case 7: printf("%02d ����� %d ����", ddmm>>8, yy);
       break;
       case 8: printf("%02d ������ %d ����", ddmm>>8, yy);
       break;
       case 9: printf("%02d ������� %d ����", ddmm>>8, yy);
       break;
       case 10: printf("%02d ������ %d ����", ddmm>>8, yy);
       break;
       case 11: printf("%02d ��������� %d ����", ddmm>>8, yy);
       break;
       case 12: printf("%02d ������ %d ����", ddmm>>8, yy);
    }
        else puts("\a������� ����...");
        printf("\n���������? (�/�) \n");
        ddmm = getch();
    } while ( ddmm == '�' || ddmm == '�' || ddmm == '�' || ddmm == '�');
    return 0;
}
