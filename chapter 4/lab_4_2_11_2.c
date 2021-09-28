#include <stdio.h>

int main(void) {

    int i,j;
    char sign[26];
    char word[5];
    word[0]='g';
    word[1]='r';
    word[2]='e';
    word[3]='a';
    word[4]='t';

    sign[0] = 'a';

    for(i=1; i<26; i++) {
        sign[i]=sign[0]+i;
    }

    for(i=1; i<=26; i++) {
        printf("%c\n", sign[26-i]);
    }

    for(i=0; i<5; i++) {
       for(j=0; j<26; j++) {
            if(word[i]==sign[j]) printf("%c", sign[j]);
       }
    }

    return 0;
}
