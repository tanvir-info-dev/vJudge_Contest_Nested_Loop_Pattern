#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1 ; i<=2*n-1 ; i++){
        printf("*");
    }
    printf("\n");
    int m=n-1,space=1;
    for(int i=1 ; i<=m ; i++){
        for(int j=m ; j>=i ; j--){
            printf("*");
        }
        for(int j=1 ; j<=space ; j++){
            printf(" ");
        }
        space+=2;
        for(int j=m ; j>=i ; j--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}