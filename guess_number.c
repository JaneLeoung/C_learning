#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu()
{
  printf("1, paly game\n");
  printf("0, exit game\n");
}
void game()
{  
  srand((unsigned) time(NULL));
  int random = rand();
  int ran = random % 100 + 1;
  
  while(1)
    {
      printf("input a number\n");
      int number;
      scanf("%d", &number);
      if(number>ran)
      {
        printf("try a lesser number\n");
      }
      else if(number<ran)
      {
        printf("try a greater number\n");
      }
      else
      {
        printf("bingo\n");
        break;
      }
    }
  
}
int main(void)
{ 
  int input;
  do 
    {
      menu();
      scanf("%d", &input);
      switch(input)
        {
          case 1:
            game();
            break;
          case 0:
            printf("exit game");
            break;
          default:
            printf("wrong input, try again");
            break;         
        }
    }while(input);
  
}