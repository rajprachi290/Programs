#include <stdio.h>

int main()
{
    int k,l,i,j,c;
    printf("enter rows  ");
    scanf("%d",&i);
    printf("enter columns    ");
    scanf("%d",&j);
    int ar[i][j];
    // value entry
    printf("enter values of matrix\n");
    for(k=0;k<i;k++)
    {for(l=0;l<j;l++)
     { printf("enter values of %d%d     ",k,l);
      scanf("%d",&ar[k][l]);
         
     }
    }
    //displaying the matrix
    for(k=0;k<i;k++)
    {for(l=0;l<j;l++)
      {printf("%d",ar[k][l]);
     
    } printf("\n");}

    return 0;
}
