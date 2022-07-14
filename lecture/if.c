# include <stdio.h>

int main (void){
    // if abs
    int x = -150;
    if (x < 0){
        x = -x;
    }
    printf(" x의 절댓값은 %d입니다.\n", x);

    //학점 구하기
    int score = 85;
    if (score >= 90){
        printf("당신의 학점은 A입니다.\n");
    }
    else if (score >=80){
        printf("당긴의 학점은 B입니다.\n");
    }
    else if (score >=70){
        printf("당신의 학점은 C입니다.\n");
    }
    else{
        printf("당신의 학점은 F입니다.\n");
    }

    //운년 반복 프로그램
    /* 윤년 = 4년만다, 그렇지만 100년 단위 일때는 윤년에 해당하지 않도록
    윤년 = 400년 단위일 때는 어떤 상황이든간에 윤년으로 설정한다
    */   
    int year = 2016;
    if ((year%4 == 0 && year % 100 != 0) || year % 400 ==0){
     printf("%d년은 윤년입니다.\n", year);
    }
    else {
     printf("%d년은 윤년이 아닙니다.\n", year);
    }
     return 0;
}