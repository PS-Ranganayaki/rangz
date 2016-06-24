#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
   FILE *f;
   char ch;
   int line=0;
   clrscr();
   f=fopen("student","w");
   printf("Enter text press ctrol+z to quit\n");
   do
   {
     ch=getchar();
     putc(ch,f);
   }
   while(ch!=EOF);
   fclose(f);
   f=fopen("student","r");
   while((ch=getc(f))!=EOF)
   {
     if(ch=='\n')
     line++;
     putchar(ch);
   }
   fclose(f);
   printf("\n no of line=%d\n",line);
   getch();
}
