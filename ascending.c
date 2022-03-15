#include <stdio.h>

int main()
{
    int n,i,j,c;
    printf("enter the no of elements ");
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
        if(a[i]<a[j])
        {c=a[i];
        a[i]=a[j];
        a[j]=c;
        }
     for(i=0;i<n;i++)
     printf("%d ",a[i]);

    return 0;
}
