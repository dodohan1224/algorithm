# include <stdio.h>

int main (void){
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    if(a==b && b==c){printf("%d", 10000+(a*1000));}
    else if(a==b && a!=c && c!=b){printf("%d", 1000+(a*100));}
    else if(b==c && b!=a && c!=a){printf("%d", 1000+(b*100));}
    else if(c==a && c!=b && a!=b){printf("%d", 1000+(c*100));}
    else{
        if(a>b && a>c){printf("%d", a*100);}
        else if(b>a && b>c){printf("%d", b*100);}
        else if(c>a && c>b){printf("%d", c*100);}
    }
    return 0;
}