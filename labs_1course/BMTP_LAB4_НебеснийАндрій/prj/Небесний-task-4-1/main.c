#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float main()
{
 char *locale=setlocale(LC_ALL, "");
 float salary, trib_1, trib_2, trib_3, trib_4;
 unsigned char c;
 printf("Додаток обчислює розмiр внескiв з зарплатнi до податку.\n");
 printf("Бажаєте отримати iнформацiю про розробника?\n");
 printf("Якщо бажаєте Введiть Y;\n iнакше будь-який символ.\n");
 scanf("%c", &c);
 getchar();
 if(c=='Y' || c=='y'){
    printf("Даний додаток було розроблено студентом ЦНТУ\nНебесним Андрiєм в 2020 роцi.(c)\n");
 }
 else{
    printf("Iнформацiю про розробника пропущено.\n");
 }
 printf("Введiть розмiр зарплатнi:\n");
 scanf("%f", &salary);
 if(salary>=0){
    printf("Дякуємо. Результати обчислень:");
    trib_1=(salary*33.26)/100;
    trib_2=(salary*1.6)/100;
    trib_3=(salary*1.4)/100;
    trib_4=(salary*0.56)/100;
    printf("\nВнесок до пенсiйного фонду - %0.2f", trib_1);
    printf("\nВнесок до фонду соц. страхування на випадок безробiття - %0.2f", trib_2);
    printf("\nВнесок до фонду соц. страхування у випадку втрати працездатностi - %0.2f", trib_3);
    printf("\nВнесок до фонду соц. страхування вiд нещасних випадкiв - %0.2f", trib_4);
    printf("\nСума усiх внескiв (розмiр податку) - %0.2f\n", trib_1+trib_2+trib_3+trib_4);
 }
 else{
    printf("Невiрно введенi данi.\n");
 }
 printf("Натиснiть Enter для завершення роботи додатку.");
 getchar();
 getchar();
 return 0;
}
