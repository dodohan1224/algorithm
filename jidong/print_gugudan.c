# include <stdio.h>

void print_gugudan(int dan){
    int i;
    for(i=1; i<10; i++){
        printf("%d*%d=%d\n",dan,i,dan*i);
    }
}
int main (void){
    int dan;
    scanf("%d",&dan);
    print_gugudan(dan);
    return 0;
}