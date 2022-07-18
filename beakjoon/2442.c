# include <stdio.h>

int main(void){
    int j,i,N;
    scanf("%d", &N);
    for(j=1; j<=N; j++){
        for(i=N-j; i>0; i--){
            printf(" ");
        }
        for(i=1; i<=j; i++){
            printf("*");
        }
        for(i=0; i<j-1; i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}