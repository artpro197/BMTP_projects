#include <locale.h>

int main()
{
  float a;
  char *locale = setlocale(LC_ALL, "");
  printf("¬ведiть довжину гранi куба (м):");
  scanf("%f", &a);
  printf("ќб\'Їм куба: %0.2f м.", a*a*a);
  puts("ƒл€ завершенн€ натиснiть Enter....");
  getch();
  return 0;
}

