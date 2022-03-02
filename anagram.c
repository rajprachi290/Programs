#include <stdio.h>
#include <string.h>
int main()
{
    int i,j,g,f;
    char st1[20],st2[20];
    printf("enter first word");
    scanf("%s",st1);
    printf("enter second word");
    scanf("%s",st2);
    int check =1,count,result;
    i=strlen(st1);
    j=strlen(st2);
    for(f=0;f<i;f++)
    {
    for(g=0;g<j;g++)
     if(st1[f]==st2[g])
      { count=1;
      break;}
       else 
       count=0;
    if(check==count)
    result=1;
    }
    if(result==1)
    printf("anagram");
    else
    printf("not an anagram");
    return 0;
}
