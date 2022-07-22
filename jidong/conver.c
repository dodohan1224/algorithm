# include <stdio.h>

char convert(char word){
    int Word;
    Word=("%c",word);
    if(Word>=65 && Word<=90){
        word=("%d",Word + 32);
    }
    else if(Word>=97 && Word<=122){
        word=("%d",Word - 32);
    }
    return word;
}
int main (void){
    char word, convertWord;
    scanf("%c", &word);

    convertWord = convert(word);
    printf("변환된 알파벳은 %c입니다.", convertWord);
    return 0;
}