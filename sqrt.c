#include <stdio.h>

int taskCourse(int n1, int n2)
{
scanf("%d %d",&n1,&n2);
  return n1+n2;
}
void main()
{
  int result = taskCourse(0,0);
    printf("Your result is %d\n",result);
}
