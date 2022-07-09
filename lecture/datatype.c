# include <stdio.h>
# define MONTHS 12

int main (void) {
    //double???
    double monthSalary = 1000.5;
    printf("$ %.2f",monthSalary*MONTHS);
    printf("\n");

    //char???
    char x = 'A'; // int x = 65????????? 결과??? A printf?????? c???기때문에

    char y =65;
    printf("%c\n",x);
    printf("%c\n",y);
    char z = 'B';
    printf("%c\n",z);
    printf("%d\n",z);

    //int???
    int u = 100;
    printf("10진수 = 출력: %d\n", u);
    printf("8진수 = 출력: %o\n",u);
    printf("16진수 = 출력: %x\n",u);


    return 0;
}