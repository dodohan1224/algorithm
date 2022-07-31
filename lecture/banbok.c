# include <stdio.h>

//숫자 피라미드
//반복함수를 이용하여 숫자 피라미드를 출력합니다.
int print(int a){
    int i,j;
    for(i=0; i<a; i++){
        for(j=0; j<=i; j++){
            printf("%d ", j+1);
        }
        printf("\n");
    }
}
int main (void){
    int a;
    scanf("%d", &a);
    print(a); //print라는 함수에 a를 넣어준것
    return 0;
}