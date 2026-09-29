#include <stdio.h>
#include <stdlib.h>

int main()  //3.18
{
    double sales;
    double earnings;

    printf("Enter sales in dollars (-1 to end):");
    if(scanf("%lf",&sales)!=1)
    {
        printf("Invalid input.\n");
        return 1;
    }
    while (sales !=-1.0)
    {
        earnings=200.0+(0.09*sales);
        printf("Salary is: $%.2f\n\n",earnings);

        printf("Enter sales in dollars (-1 to end):");
        if(scanf("%lf",&sales) !=1)
        {
            printf("Invalid input.\n");
            return 1;
        }
    }
    return 0;
}
