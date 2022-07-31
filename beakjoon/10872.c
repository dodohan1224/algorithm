# include <stdio.h>

int main(void){
    int number, count, i;
    count = 1;
    scanf("%d", &number);
    for (i = number; i > 0; i--){
        count = count * i;
    }
    printf("%d", count);
    return 0;
}