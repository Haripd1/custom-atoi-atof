#include<stdio.h>
int my_atoi(char *);
int main(int argc,char **argv)
{
if(argc!=4)
{
printf("usage ./cal <int> <operator> <int>\n");
return 1;
}
int n1,n2;
n1=my_atoi(argv[1]);
n2=my_atoi(argv[3]);
switch(argv[2][0])
{
case '+':
printf("%d\n",n1+n2);
break;
case '-':
printf("%d\n",n1-n2);
break;
case '*':
printf("%d\n",n1*n2);
break;
case '/':
if(n2==0)
printf("Can't divided by zero\n");
else
printf("%d\n",n1/n2);
break;
case '%':
if(n2==0)
printf("Can't divided by zero\n");
else
printf("%d\n",n1%n2);
break;
default:
printf("Invalid charcters\n");
}
return 0;
}
int my_atoi(char *p)
{
int i=0,sign=1,n1=0;
while(p[i]==' '|| p[i]=='\t')
i++;
if(p[i]=='-')
{
sign=-1;
i++;
}
else if(p[i]=='+')
{
sign=1;
i++;
}
for(;p[i];i++)
if(p[i]>='0' && p[i]<='9')
n1=n1*10+(p[i]-'0');
else
break;
return sign*n1;
}
