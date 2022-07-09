#include <stdio.h>
#include <limits.h> //int max를 사용하기 위해

int main(void){
    // 변수 설정
    int x;
    x = 5;
    printf("%d",x);
    printf("변수 x의 메모리 크기는 %d입니다.",sizeof(x));

    double y = 123456789.123456789; //float는 4바이트밖에 못해서 double로 해야함
    int r = INT_MAX;
    printf("y = %.2f\n", y);
    printf("int의 최댓값 r은 %d입니다.\n", r);

    //overflow
    printf("r+1은 %d입니다.\n", r+1); //최댓값에서 +1을 해주면 최솟값이 나옴

    //사칙연산
    int t = 10;
    int u = 20;
    printf("t = %d입니다.\n", t);
    printf("u = %d입니다.\n", u);
    printf("t+u=%d입니다.\n",t+u);
    printf("t-u=%d입니다.\n",t-u);
    printf("t*u=%d입니다.\n",t*u);
    printf("t/u=%d입니다.\n",t/u); //몫만 출력
    return 0;
}