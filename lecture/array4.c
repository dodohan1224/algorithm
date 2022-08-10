# include <stdio.h>

//학생 점수 총합 구하기
int main(void){
    int score[5][2]; //첫번째는 학생 수, 두번째는 점수들
    int total[2] ={0, }; //1차원 배열을 할때 0을 넣어주겠다라는 의미
    int i;
    for(i =0; i<5; i++){
        printf("%d번 학생의 수학, 영어 점수 : ", i+1);
        scanf("%d %d", &score[i][0], score[i][1]);
    }
    for(i=0; i<5; i++){
        total[0] += score[i][0];
        total[1] += score[i][1];
    }
    printf("\n\n 5명의 수학 점수 합계: %d\n", total[0]);
    printf("5명의 영어 점수 합계: %d\n", total[1]);
    return 0;
}