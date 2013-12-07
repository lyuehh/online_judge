#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int cmp_char(const void *_a, const void *_b) {
    char *a = (char*)_a;
    char *b = (char*)_b;
    return *a - *b;
}

int main() {
    int leap,i,j,leapp,n;
    int lin[100];
    char str[100][100];
    char ans[100][100];
    char str1[100][100];
    char ansstr[100],strr[100];
    leap=-1;
    while(scanf("%s",strr)&&(strr[0]!='#')) {
        leap++;
        strcpy(str[leap],strr);
        n=strlen(strr);
        for(i=0; i<n; i++) {
            if(strr[i]>='A'&&strr[i]<='Z') {
                str1[leap][i]=strr[i]+'a'-'A';
            } else {
                str1[leap][i]=strr[i];
            }
        }
        str1[leap][n]='\0';
        qsort(str1[leap], n, sizeof(char), cmp_char);
    }
    leap++;
    for(i=0; i<leap; i++) {
        lin[i]=0;
    }
    for(i=0; i<leap; i++) {
        for(j=0; j<leap; j++) {
            if(strcmp(str1[i],str1[j])==0) {
                lin[i]++;
            }
        }
    }
    leapp=0;
    for(i=0; i<leap; i++) {
        if(lin[i]==1) {
            strcpy(ans[leapp],str[i]);
            leapp++;
        }
    }
    for(i=0; i<leapp; i++) {
        for(j=0; j<leapp; j++) {
            if(strcmp(ans[i],ans[j])<0) {
                strcpy(ansstr,ans[i]);
                strcpy(ans[i],ans[j]);
                strcpy(ans[j],ansstr);
            }
        }
    }
    for(i=0; i<leapp; i++) {
        printf("%s\n",ans[i]);
    }
    return 0;
}
