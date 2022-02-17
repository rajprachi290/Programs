#include <stdio.h>

int main()
{
    double sum=0.0,i;
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=1;i<=n;i+=4)
    {
        
        printf("%d/%d+",(int)i,(int)i+2);
        sum=sum+(i/(i+2));
    }
    printf("0\nthe sum is %lf",sum);
    return 0;
}
