#include <stdio.h>
#include <stdlib.h>

int main()
{
    //page 225 (4.11)
    int a,sum;
    a=1;
    sum=0;

    while(a<=100 && a>0)
    {
        if(a%7==0)
        {
            printf("%d\n",a);
            sum=sum+a;
        }
        a=a+1;
    }
    printf("Sum: %d",sum);
    return 0;
}
