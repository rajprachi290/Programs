#include <stdio.h>

int main()
{
    int a=1,b=2,c;
    int *i,*j;
    i=&a;  //500
    j=&b;  //600
    c=*i;  //*(500)=1__ ML of c be 300
    i=j;  //i=600
    j=&c;  //*j=&c => j=c=1
    
    
    printf("value of a %d\n",*i);
    printf("value of b %d",*j);
    

    return 0;
}
