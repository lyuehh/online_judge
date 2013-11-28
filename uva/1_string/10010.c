#include<stdio.h>
#include<ctype.h>
#include<string.h>

char s[50][50];
int n,m,p;
int x[9],y[9];
char t[50];

void fill()
{
    x[1]=-1;
    y[1]=-1;
    x[2]=-1;
    y[2]= 0;
    x[3]=-1;
    y[3]= 1;
    x[4]= 0;
    y[4]=-1;
    x[5]= 0;
    y[5]= 1;
    x[6]= 1;
    y[6]=-1;
    x[7]= 1;
    y[7]= 0;
    x[8]= 1;
    y[8]= 1;
}
void init()
{
    scanf("%d%d",&n,&m);
    getchar();
    int i;
    for (i=0; i<n; i++)
        fgets(s[i],sizeof(s[i]),stdin);
}
int ok(int i,int j)
{
    int okok;
    int k,l;
    for (l=1; l<=8; l++) {
        okok=1;
        for (k=0; t[k]!='\n' && t[k]!='\0'; k++) {
            int xx=i+x[l]*k,yy=j+y[l]*k;
            if (xx==-1 || xx==n || yy==-1 || yy==m ||
                    (s[xx][yy]!=t[k] && s[xx][yy]!=t[k]+'a'-'A' && s[xx][yy]!=t[k]-'a'+'A')) {
                okok=0;
                break;
            }
        }
        if (okok) return 1;
    }
    return 0;
}
void find()
{
    int i,j;
    for (i=0; i<n; i++)
        for (j=0; j<m; j++)
            if (ok(i,j))
            {
                printf("%d %d\n",i+1,j+1);
                return;
            }
}
void doit()
{
    scanf("%d",&p);
    getchar();
    int k;
    for (k=1; k<=p; k++)
    {
        fgets(t,sizeof(t),stdin);
        find();
    }
}
int main()
{
    fill();
    int zhu,now=0;
    scanf("%d",&zhu);
    for (now=1; now<=zhu; now++)
    {
        init();
        doit();
        if (now!=zhu) printf("\n");
    }
    return 0;
}
