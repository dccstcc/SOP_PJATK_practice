#include <stdio.h>
int main(void) {

	int i,j;
	char chess[8][8];

	for(i=0; i<8; i++){
        for(j=0; j<8; j++) {
                if(i==0) {
                    switch(j) {
                        case 0: {chess[i][j]='R';break;}
                        case 1: {chess[i][j]='N';break;}
                        case 2: {chess[i][j]='B';break;}
                        case 3: {chess[i][j]='Q';break;}
                        case 4: {chess[i][j]='K';break;}
                        case 5: {chess[i][j]='B';break;}
                        case 6: {chess[i][j]='N';break;}
                        case 7: {chess[i][j]='R';break;}
                       }

                }

                if(i==1) {
                    chess[i][j] = 'P';
                }

                if(i>=2 && i<=5) {
                    chess[i][j]=' ';
                }

                if(i==6) {
                    chess[i][j]='P';
                }

                if(i==7) {
                    switch(j) {
                        case 0: {chess[i][j]='R';break;}
                        case 1: {chess[i][j]='N';break;}
                        case 2: {chess[i][j]='B';break;}
                        case 3: {chess[i][j]='Q';break;}
                        case 4: {chess[i][j]='K';break;}
                        case 5: {chess[i][j]='B';break;}
                        case 6: {chess[i][j]='N';break;}
                        case 7: {chess[i][j]='R';break;}
                       }

                }
    }
	}

    for(i=0; i<8; i++) {
        for(j=0; j<8; j++) {
            printf("%c", chess[i][j]);
        }
        puts("");
    }


	return 0;
}
