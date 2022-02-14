#include <stdio.h>
int main()
{
   int a,b;
	scanf("%d",&a);
	scanf("%d",&b);
	while(a<=b)
	{
		if(a%3==0&&a%7==0)
		printf("%d\n",a);
		 a++;
    }

    return 0;
}