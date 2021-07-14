#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
char effet(char texte[200]);

char effet(char texte[200])
{int i,j,l,k,m;
j=strlen(texte);m=j;
// 1ere etape :
for(l=0;l<m;l++)
{
k=0;
for(i=0;i<j;i++)printf("\n");
printf("%c",texte[k]);
j--;
k++;
while(texte[k]!='\0')
{
if((m-(j+k))>=0){printf("\n");for(i=0;i<=k;i++)printf(" ");}
printf("%c",texte[k]);
k++;
}
Sleep(10);
system("cls");
}
// La 2 etape :
for(i=1;i<=m;i++)
{k=0;
while(texte[k]!='\0')
{
if(i<k){printf("\n");for(l=0;l<k;l++)printf(" ");}
printf("%c",texte[k]);
k++;
}
Sleep(50);
system("cls");
}
puts(texte);Sleep(3000);
}
//ÏÇáÉ ÊÚãá Úáì ÑÓã ÇáÑÈÇÚíÇÊ Ýí Ãí ÅÍÏÇËíÉ ÊÎÊÇÑåÇ ÃäÊ
int func_Quadrant(int x,int y,int z,int t)
{
int i,j;x=(x+x-3);j=x-1;
for(i=0;i<t;i++)printf("\n");//áÊÍÐíÐ ÇáØæá ÇáÐí íäÒá Èå ÇáÑÈÇÚí ááÃÓÝá
for(i=0;i<z;i++)printf(" ");
for(i=0;i<x;i++)printf("%c",220);
z++;
for(i=0;i<y;i++)printf("\n%*c%*c",z,219,j,219);
printf("\n");
z--;
for(i=0;i<z;i++)printf(" ");
for(i=0;i<x;i++)printf("%c",223);
}

void func_start()
{
int i=0;char *string=
          "\n\n                       ***********    *****************       *******         ***********      *****************\n"
          "                       ***********    *****************     **       **       ************     ***************** \n"
          "                       **                     **           **         **      **         **            **        \n"
          "                       **                     **          **           **     **         **            ** \n"
          "                       **                     **         **             **    **         **            **     \n"
          "                       ***********            **         *****************    ***********              **\n"
          "                       ***********            **         *****************    **********               **\n"
          "                                **            **         **             **    ****                     **\n"
          "                                **            **         **             **    **  **                   ** \n"
          "                                **            **         **             **    **    **                 **  \n"
          "                       ***********            **         **             **    **      **               **\n"
          "                       ***********            **         **             **    **        **             **   \n";
do{printf("%s",string);Sleep(500);system("cls");Sleep(500);}
while(kbhit()==0);
}
