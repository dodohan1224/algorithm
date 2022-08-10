# include <stdio.h>

int main(void){
    int i, ascending, descending;
    int array[8];
    ascending=0;
    descending=8;

    for(i=0; i<8; i++){
        scanf("%d", &array[i]);
        if(array[i]==i+1){ascending = ascending+1;}
        else if(array[i]==8-i){descending = descending-1;}
    }
    
    if(ascending == 8){printf("ascending");}
    else if(descending ==0){printf("descending");}
    else{printf("mixed");}
    return 0;
}