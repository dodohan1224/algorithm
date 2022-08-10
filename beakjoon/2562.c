# include <stdio.h>

int main (void){
    int i, max, index;
    int array[9];
    max = 0;
    index = 0;

    for(i=0; i< 9; i++){
        scanf("%d", &array[i]);
        if(max < array[i]){
            max = array[i];
            index = i;
        }
    }
    printf("%d\n", max);
    printf("%d", index+1);
    return 0;
}