# include <stdio.h>
# define MONTHS 12

int main (void) {
    //double???
    double monthSalary = 1000.5;
    printf("$ %.2f",monthSalary*MONTHS);
    printf("\n");

    //char???
    char x = 'A'; // int x = 65????????? ���??? A printf?????? c???�⶧����

    char y =65;
    printf("%c\n",x);
    printf("%c\n",y);
    char z = 'B';
    printf("%c\n",z);
    printf("%d\n",z);

    //int???
    int u = 100;
    printf("10���� = ���: %d\n", u);
    printf("8���� = ���: %o\n",u);
    printf("16���� = ���: %x\n",u);


    return 0;
}