#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        if(i>1 && i<n){
            printf("*");
            for(int j=2 ; j<=n-1 ; j++){
                if(i==j || i+j==n+1){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("*");
        }
        else{
            for(int j=1 ; j<=n ; j++){
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}