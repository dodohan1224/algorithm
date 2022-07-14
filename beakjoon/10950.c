# include <stdio.h>

int main (void){
    int i,A,B;
    int testCase;
    scanf("%d", &testCase);
    for(i = 0; i < testCase; i++){
        scanf("%d %d",&A,&B);
        printf("%d\n", A+B);
    }
    return 0;
}
