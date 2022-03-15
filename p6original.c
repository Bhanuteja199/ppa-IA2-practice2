#include<stdio.h>
void input_string(char *a);
{
printf("enter the string");
  scanf("%s",a);
  }
char str_reverse(char *a)
{
  int i,m=0;
  for(i=0;a[i]!='\0';i++)
  m++;
  return m;
  }
void output(char *a,char reversea);
{
  printf("the reverse of the string");
  for(i=string-1;a[i]!='\0';i--)
  printf("%c",a[i]);
  }
int main()
{
  char a[100];
  input_string(a);
  int reverse a;
  reverse-a=str_reverse(a);
  output(a,reverse);
  return 0;
  }

}
