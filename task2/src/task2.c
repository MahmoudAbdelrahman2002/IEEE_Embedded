#include <stdio.h>
#include <stdlib.h>
int countOnes(unsigned int *reg)
{
    int i=0,countt=0;
    for(i=0;i<32;i++)
    {
         if(*reg&(1<<i))
            countt++;

    }

    return countt;
}


int main()
{
  int x=0xff0077;
  printf("%d",countOnes(&x));
}
