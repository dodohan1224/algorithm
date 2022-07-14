# include <stdio.h>
# define N 20

int main (void) {
   //1부터 1000까지의 합
   int i =1, sum = 0;
   while(i <= 1000){
    sum = sum + i;
    i++;
   }
   printf("1부터 1000까지의 합은 %d입니다.\n", sum);

   // 사각형 출력하기(이중 for문)
   int h, j;
   for(h = 0; h <N; h++){ //첫번째는 초기값, 두번째는 참이라면 실행하는 조건, 세번째는 반복되면서 실행하는 것
    for(j = 0; j<N; j++){
        printf("★");
    }
    printf("\n");
   }

   // 
   int k, d;
   for(k = 0; k <N; k++){ // 20줄 의미
    for(d = N - k - 1; d > 0; d--){  //공백 의미
        printf(" ");
    }
    for (d = 0; d < k ; d++){ // 별 의미
        printf("★");
    }
    for (d = 0; d < k-1; d++){
        printf("★");
    }
    printf("\n");
   }
    return 0;
}