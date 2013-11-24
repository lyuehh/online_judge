#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
     char key[30][80];
     char ex[30][80];
     char t[30][80];
     int res[30];
     int i,j,k,e,ct=0,max;
     while(scanf("%d%d",&k,&e)!=EOF)
     {
         for(i=0;i<k;i++)
         {
              scanf("%s",key[i]+1);
              key[i][0]=' ';
              key[i][strlen(key[i])+1]=0;
              key[i][strlen(key[i])]=' ';
         }
         getchar();
         for(i=0;i<e;i++)
              fgets(ex[i],sizeof(ex[i]),stdin);
         for(i=0;i<e;i++)
         {
              t[i][0]=' ';
              for(j=0;ex[i][j]!='\n';j++)
                   if(isalpha(ex[i][j]))t[i][j+1]=tolower(ex[i][j]);
                   else t[i][j+1]=' ';
              t[i][j+1]=' ';
              t[i][j+2]=0;
         }
         max=0;
         memset(res,0,sizeof(res));
         for(i=0;i<e;i++)
         {
              for(j=0;j<k;j++)
                   if(strstr(t[i],key[j])!=NULL)res[i]++;
              if(max<res[i])max=res[i];
         }
         printf("Excuse Set #%d\n",++ct);
         for(i=0;i<e;i++)
              if(res[i]==max)printf("%s",ex[i]);
         printf("\n");
     }
     return 0;
}