#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int star=n;
    for(int i=1 ; i<=3 ; i++){
        if(i==2){
            printf("*");
            for(int k=1 ; k<=n-2 ; k++){
                printf(" ");
            }
            printf("*");
        }
        else{
            for(int j=1 ; j<=star ; j++){
                printf("*");
            }
        }
        printf("\n");
    }

    return 0;
}