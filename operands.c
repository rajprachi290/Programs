#include <stdio.h>
int cal(int a,int b,char *c)
{
    switch(*c)
    {
        case('+'):return (a+b);
                  break;
        case('-'):return (a-b);
                  break;
        case('*'):return (a*b);
                  break;
        case('/'):return (a/b);
                  break;    
        case('%'):return (a%b);
                  break;
    }
}
int main()
{
    int i,j;
    char ch[2];
    printf("ENTER TWO OPERANDS AND AN OPPERATOR\n");
    scanf("%d,%d",&i,&j);
    scanf(" %c",ch);
    int res=cal(i,j,ch);
    printf("result = %d",res);
    return 0;
}
