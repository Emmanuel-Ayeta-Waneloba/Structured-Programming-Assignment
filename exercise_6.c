#include <stdio.h>
#include <stdlib.h>

int main()  //4.13 page 225
{
    int num=0,n,sum=0,sq=0,sum_sq=0,cube=0,sum_cube=0;
    n=0;

    printf("Enter a number:\n");
    scanf("%d",&num);


    while(n<num)
    {
        n=n+1;
        sum=sum+n;
        sq=n*n;
        sum_sq=sum_sq+sq;
        cube=n*n*n;
        sum_cube=sum_cube+cube;

        printf("The sum of the numbers is %d\n",sum);
        printf("The sum of squares is %d\n",sum_sq);
        printf("The sum of cubes is %d\n",sum_cube);
        printf("\n");

    }
    return 0;
}
