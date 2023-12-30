#include "stdio.h"

int addNumbers(int num1){
  int    square=num1*num1;
    return square;
}


int main()
{

  int result=addNumbers(1650);
  printf("The result is %d\n",result);

}
