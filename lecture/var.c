#include <stdio.h>
#include <limits.h> //int max�� ����ϱ� ����

int main(void){
    // ���� ����
    int x;
    x = 5;
    printf("%d",x);
    printf("���� x�� �޸� ũ��� %d�Դϴ�.",sizeof(x));

    double y = 123456789.123456789; //float�� 4����Ʈ�ۿ� ���ؼ� double�� �ؾ���
    int r = INT_MAX;
    printf("y = %.2f\n", y);
    printf("int�� �ִ� r�� %d�Դϴ�.\n", r);

    //overflow
    printf("r+1�� %d�Դϴ�.\n", r+1); //�ִ񰪿��� +1�� ���ָ� �ּڰ��� ����

    //��Ģ����
    int t = 10;
    int u = 20;
    printf("t = %d�Դϴ�.\n", t);
    printf("u = %d�Դϴ�.\n", u);
    printf("t+u=%d�Դϴ�.\n",t+u);
    printf("t-u=%d�Դϴ�.\n",t-u);
    printf("t*u=%d�Դϴ�.\n",t*u);
    printf("t/u=%d�Դϴ�.\n",t/u); //�� ���
    return 0;
}