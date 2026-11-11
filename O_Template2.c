#include <stdio.h>
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
        if(i%2==0){
            if(count%2==0){
                for(int j=1 ; j<=n-1 ; j++){
                    printf(" ");
                }
                printf("*");
            }
            else{
                printf("*");
                for(int j=1 ; j<=n-1 ; j++){
                    printf(" ");
                }
            }
            count++;
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