#include <stdio.h>

int main() {
  printf("\x1b[34m-----------------------\x1b[34m\n");
  printf("\x1b[35m     NOTA    LEGAL    \x1b[35m \n");
  printf("-----------------------\n");
  printf("ITEM           QTD     VALOR\n"); 
  printf("%-13s %3i %10.2f\n" , "Banana nanica", 2, 20.00);
  printf("%-13s %3i %10.2f\n" , "Uva globo", 1, 15.00);
  printf("%-13s %3i %10.2f\n" , "Laranja lima", 1, 18.00);
  // printf("Banana nanica 2   20.00\n");
  // printf("Uva globo     1   15.00\n");
  // printf("Laranja lima  1   18.00\n");
  printf("-----------------------\x1b[31m\n");
  printf(" TOTAL:           53.OO\x1b[31m\n");

  return 0;
}