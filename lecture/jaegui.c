# include <stdio.h>

//특정한 문자열을 재귀함수로 반복 출력하기

void print(int count){
    if(count == 0){
        return;
    }
    else{
        printf("문자열을 출력합니다.\n");
        print(count-1);
    }
}
int main (void){
    int count;
    printf("문자열을 몇 개 출력할까요?");
    scanf("%d", &count);
    print(count);
    return 0;
}