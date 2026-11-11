#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        if(i>1 && i<n){
            printf("*");
            printf(" ");
            printf("*");
        }
        else{
            for(int j=1 ; j<=3 ; j++){
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}