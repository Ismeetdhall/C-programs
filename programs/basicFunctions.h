
void myLine()
{
    printf("\n--------------------------------\n");
}

void myLine2(char style , int size)
{
    int i=0;
    printf("\n");
    for(i=0;i<size;i++)
    {
        printf("%c",style);
    }
    printf("\n");
}

void sumOfTwo(int a , int b)
{
    printf("\n Sum : %d",a+b);
}



int sumOfTwoInput()
{
    int v1, v2, ans;
    printf("Enter Val 1 : ");
    scanf("%d", &v1);
    printf("Enter Val 2 : ");
    scanf("%d", &v2);
    ans = v1 + v2;
    return ans;
}


int sumOfTwoReturn(int a , int b)
{
    return (a+b);
}


int calculator(char choice,int a, int b)
{
    int ans;
    switch(choice)
    {
        case '+' : {ans=a+b; break;}
        case '-' : {ans=a-b; break;}
        case '*' : {ans=a*b; break;}
        case '/' : {ans=a/b; break;}
        default : { ans = 0;}
    }
    return ans;
}


int getIntValue()
{
    int val;
    printf("\nEnter Val");
    scanf("%d",&val);
    return val;
}


char getCharValue()
{
    char val;
    printf("\nEnter Char");
    scanf("%c",&val);
    return val;
}


