#include <stdio.h>

int main (void){
    int i,A,B;
    int testCase;
    scanf("%d", &testCase);
    for(i = 0; i < testCase; i++){
        scanf("%d %d",&A,&B);
        printf("Case #%d: %d\n", i+1,A+B);
    }
    return 0;
}