#include <stdio.h>
float avg(int a,int b)
{
    return (a+b)/2;
}
void cal(int *k,int *l)
{
    if(*k>*l)
    {
        printf("max is %d\n",*k);
        printf("min is %d\n",*l); 
    }
    else
    {
        printf("max is %d\n",*l);
        printf("min is %d\n",*k); 
    }
printf("%f\n",avg(*k,*l));
    return;
}

int main()
{
    int a,b;
    printf("enter two nos.\n");
    scanf("%d %d",&a,&b);
   
    cal(&a,&b);

    return 0;
}