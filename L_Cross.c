#include <stdio.h>
int main()
{
    // Inspired Process from Arman
    int n;
    scanf("%d", &n);
    for(int i=1 ; i<=2*n-1 ; i++){
        for(int j=1 ; j<=2*n-1 ; j++){
            if(i==j || i+j==2*n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    


    // -------- My Process
    // int n;
    // scanf("%d", &n);
    // int spacea = 0, spaceb = 2 * n - 3;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= spacea; j++)
    //     {
    //         printf(" ");
    //     }
    //     printf("*");
    //     if (i < n)
    //     {
    //         for (int j = 1; j <= spaceb; j++)
    //         {
    //             printf(" ");
    //         }
    //         printf("*");
    //     }
    //     spacea++;
    //     spaceb -= 2;
    //     printf("\n");
    // }
    // spacea = n - 2;
    // spaceb = 1;
    // for (int i = 1; i <= 2 * n - 1; i++)
    // {
    //     if (i > n)
    //     {
    //         for (int j = 1; j <= spacea; j++)
    //         {
    //             printf(" ");
    //         }
    //         printf("*");
    //         if (i > n)
    //         {
    //             for (int j = 1; j <= spaceb; j++)
    //             {
    //                 printf(" ");
    //             }
    //             printf("*");
    //         }
    //         spacea--;
    //         spaceb += 2;
    //         printf("\n");
    //     }
    // }

    // return 0;
}