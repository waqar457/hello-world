#include<stdio.h>
void main()
{
  int i,j,k,m;

  for(i=0;i<=10;i++)
  {
      for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");

  }

  for(k=(i-1);k>=0;k--)
  {
      for(j=0;j<=k;j++)
        {
            printf("*");
        }
         printf("\n");
  }
}




