# include <stdio.h>
# define NUMBER 5
# include <limits.h>
//5개의 정수 중에서 최댓값과 최솟값의 위치 출력하기


int main (void){
    int i, max, min, index;
    int array[NUMBER];
    max = 0;
    index = 0;
    // define 숫자5를 설정해주었기 때문에 arry[0]~ array[4]까지 설정됨
    for(i=0; i< NUMBER; i++){
        scanf("%d", &array[i]);
        if(max < array[i]){
            max = array[i];
            index = i;
        }
    }
    printf("가장 큰 값은 %d 입니다. 그리고 %d번째에 있습니다.\n", max, index+1);
    min = INT_MAX;
    for(i=0; i< NUMBER; i++){
        scanf("%d", &array[i]);
        if(min > array[i]){
            min = array[i];
            index = i;
        }
    }
    printf("가장 작은 값은 %d 입니다. 그리고 %d번째에 있습니다.\n", min, index+1);
    return 0;
}