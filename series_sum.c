#include <stdio.h>

int main()
{
    double p1=1.0,sum=0.0,i=1,n,k=3;
    double j,m=1,sum2=0.0,final;
    printf("enter the number  ");
    scanf("%lf",&n);
    while(k<=n)  // 3!/2 + 5!/4...n!/(n-1)
    { 
        while(i<=k)
        { p1=p1*i;
          ++i;
        }
        sum=sum+(p1/(i-2));
        k=k+2;
    } 
    i=1;
    p1=1.0;
    while(i<=n)
    { j=i+1;
       while(m<=j) 
       {
         p1=p1*m;
         m++;
       }
      sum2=sum2+(i/p1);
      i=i+2;
    }
    final=sum+sum2;
    printf("the final sum is  %lf",final);
    return 0;
}
