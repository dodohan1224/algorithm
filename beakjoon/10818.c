# include <stdio.h>

int main (void){
    int i, max, min, N;
    max = -1000000;
    min = 1000000;
    scanf("%d", &N);

    int array[N];
    for(i=0; i<N; i++){
        scanf("%d", &array[i]);
        if(max < array[i]){
            max = array[i];
        }
        if(min > array[i]){
            min = array[i];
        }
    }
    printf("%d %d", min, max);
    return 0;
}