# include <stdio.h>

int main(void){
    int i,j,N;
    scanf("%d", &N);
    for(j=1; j<=N; j++){
        for(i=N; i>=j; i--){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}