#include <stdio.h>

int main()
{

     int current_year, current_month, current_day,
         birth_year, birth_month, birth_day;

     int option = -1;
     while (option != 0)
     {
          printf("\nCalculo de edad:\n");
          printf("1. Introduce fechas\n");
          printf("0. Salir del programa\n");

          scanf("%d", &option);

          if (option == 0)
               break;

          //leer fecha nacimiento
          printf("Introduce año nacimiento: \n");
          scanf("%d", &birth_year);

          printf("Introduce mes nacimiento: \n");
          scanf("%d", &birth_month);

          printf("Introduce dia nacimiento: \n");
          scanf("%d", &birth_day);

          // leer fecha actual
          printf("Introduce año actual: \n");
          scanf("%d", &current_year);

          printf("Introduce mes actual: \n");
          scanf("%d", &current_month);

          printf("Introduce dia actual: \n");
          scanf("%d", &current_day);

          if ((current_year - birth_year) < 18)
          {
               printf("es menor de edad\n");
               return 0;
          }

          if (birth_year == current_year && birth_month > current_month)
          {
               printf("es menor de edad\n");
               return 0;
          }

          if (birth_year == current_year && birth_month == current_month && birth_day > current_day)
          {
               printf("es menor de edad\n");
               return 0;
          }

          printf("\n<< es mayor de edad >>\n");
     }

     return 0;
}
