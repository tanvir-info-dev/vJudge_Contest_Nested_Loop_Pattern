#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        if(i>1 && i<n){
            printf("*");
            for(int k=1 ; k<=n-2 ; k++){
                printf(" ");
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