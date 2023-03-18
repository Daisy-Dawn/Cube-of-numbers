#include <stdio.h>
#include <stdlib.h>

//This program displays the cube of the number entered by a user up to an integer

int main(void) 
{
  int i, cube;

  printf("Please enter a number:\t");
  scanf("%d", &i);
  system("clear");

  printf("The cube is %d\n\n", i * i * i);


  
printf("\nEnd of program\n\n");
  sleep (5);
  system("clear");
  printf("Welcome user,");
  
  return 0;
}