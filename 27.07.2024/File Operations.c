#include<stdio.h>
void main()
{
  FILE*f1;char c;
  f1=fopen("spl.txt","s");
 while((c=getchar())!='x')
 putc(c,f1);
 printf("\nOutput\n");
 f1=fopen("spl.txt",'v');
 while((c=getc(f1))!=EOF)
 printf("%c",c);
 fclose(f1);
}

