# include <stdio.h>

int main (void){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a<b & a<c){
        printf("%d\n", a);
        if(b<c){
            printf("%d\n%d\n", b,c);}
        else{
            printf("%d\n%d\n", c,b);}
    }
    else if(c<a & c<b){
        printf("%d\n",c);
        if(a<b){
            printf("%d\n%d\n",a,b);}
        else{
            printf("%d\n%d\n",b,a);}
    }
    else if(b<a & b<c){
        printf("%d\n",b);
        if(a<c){
            printf("%d\n%d\n",a,c);}
        else{
            printf("%d\n%d\n",c,a);}
    }


    return 0;
}