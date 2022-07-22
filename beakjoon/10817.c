# include <stdio.h>

int main (void){
    int A,B,C;
    scanf("%d %d %d", &A,&B,&C);
    if (A>=B){
        if(B>=C && A>=C){printf("%d",B);}
        else if(C>=B && A>=C){printf("%d",C);}
        else{printf("%d",A);}
        }
    else if(B>=C){
        if(A>=B && A>=C){printf("%d",B);}
        else if(A<=B && A>=C){printf("%d",A);}
        else{printf("%d",C);}
    }
    else if(C>=A){
        if(B>=C && A<=B){printf("%d",C);}
        else if(B<=C && A>=B){printf("%d",A);}
        else{printf("%d",B);}
    }
    return 0;
}