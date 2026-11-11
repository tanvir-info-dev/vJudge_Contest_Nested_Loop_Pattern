#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=1 ; i<=n ; i++){
        if(i>1 && i<n && m>1 && n>1){
            printf("*");
            for(int k=1 ; k<=m-2 ; k++){
                printf(" ");
            }
            printf("*");
        }
        else{
            for(int j=1 ; j<=m ; j++){
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}