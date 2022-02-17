#include <stdio.h>

int main()
{
    int a,b,n,i,s;
    printf("enter no of terms ");
    scanf("%d",&n);
    printf("1 ");
    a=0;
    b=1;
    for(i=1;i<n;i++)
    {
        s=a+b;
        printf("%d ",s);
        a=b;
        b=s;
        
        
        
        
    }
    
    return 0;
}