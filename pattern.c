#include <stdio.h>

int main()
{ 
    int i,j;
    for(i=1;i<=5;++i)
   {
   for(j=i;j>=1;j--)
    printf("%d",j);
   printf("\n");}
 printf("------------------------\n");
 
 for(i=1;i<=5;++i)
 {
     if(i%2==1)
     {  for(j=1;i>=j;j++)
     printf("1");
     printf("\n");}
     
}
    return 0;
}
