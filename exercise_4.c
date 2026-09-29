#include <stdio.h>
#include <stdlib.h>

int main() //4.12 page 225
{
    for (int n = 2; n <= 100; n++) {
        int is_prime = 1;


        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            printf("%d\n", n);
        }
    }

    printf("\n");


    return 0;
}
