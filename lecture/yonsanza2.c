#include <stdio.h>
# include <math.h> //pow()나 abs()함수를 이용하기 위해
int main(void){
    //관계연선자
    int x = 50, y = 30;
    printf("x가 y와 같은가? %d\n", x==y); //false값인 0이 출력된다.
    printf("x가 y와 다른가? %d\n", x!=y);
    printf("x가 y보다 큰가? %d\n", x > y);
    printf("x에 y값을 넣으면? %d\n", x = y); // x = y는 y라는 값을 x에 넣으라는 의미
     
    //논리 연산자 and or not
    int z = 50;
    int u = 30;
    printf("z가 u보다 크고 u는 40미만입니까? %d\n", (z > u)&&(u < 40));
    printf("z가 u보다 작거나 혹은 u는 30입니까? %d\n", (z < u)||(u == 30));
    printf("z가 50이 아닙니까? %d\n", (z != 50));

    //조건 연산자
    int e = -50, w = 30;
    int absoluteE = (e > 0) ? e : -e; //이 부분이 조건 연산자 괄호안이 참이라면 e반환 그렇지 않다면 :뒤에 반환
    int max = (e > w) ? e : w;
    int min = (e < w) ? e : w;
    printf("e의 절댓값은 %d입니다.\n", absoluteE);
    printf("e와 y중에서 최댓값은 %d입니다.\n", max);
    printf("e와 y중에서 최솟값은 %d입니다.\n", min);

    //pow() 거듭제곱 함수
    double h = pow(2.0, 20.0);
    printf("2의 20제곱은 %.0f입니다.\n", h);
    return 0;
}