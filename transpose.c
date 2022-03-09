#include <stdio.h>

int main()
{
    int i;
    int j;
    int c;
    int a[3][3]={{1,1,1},{2,2,2},{3,3,3}};
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    printf("%d",a[i][j]);
    } printf("\n");
        
    }
    printf("----------------------------------------------\n");
    for(i=1;i<3;i++)
    for(j=0;j<2;j++)
    { c=a[i][j];
    a[i][j]=a[j][i];
    a[j][i]=c;
    }
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {
    printf("%d",a[i][j]);
    }printf("\n");    
    }
    return 0;
}
