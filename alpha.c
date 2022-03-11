int main()
{
    char ch[10];
    int i,j,count=0;
    printf("enter word  ");
    scanf("%s",ch);
    for(i=65;i<122;i++)
{
    for(j=0;j<strlen(ch);j++)
    {if(ch[j]==i)
    count=count+1;
    }
    printf("frequency of %c is %d\n",i,count);
    count=0;
}
    
    