# include <stdio.h>

int fibonacci(int number){
    int i,j,k;
    for(i=0; i<=number; i++){
        if(number == 0){ return 0;}
        else if(number == 1){ return 1;}
        else{return fibonacci(number-1) + fibonacci(number-2);}
        }
    }

int main (void){
    int number;
    scanf("%d", &number);
    printf("%d", fibonacci(number));
    return 0;
}