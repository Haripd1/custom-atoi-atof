#include<stdio.h>
float my_atof(char *);
int main(int argc,char **argv)
{
if(argc!=4)
{
printf("Usage:./cal <float> <operator> <float>\n");
return 1;
}
float f1,f2;
f1=my_atof(argv[1]);
f2=my_atof(argv[3]);
switch(argv[2][0])
{
case '+':
printf("%.2f",f1+f2);
break;
case '-':
printf("%.2f",f1-f2);
break;
case '*':
printf("%.2f",f1*f2);
break;
case '/':
if(f2==0)
printf("Enter greate than zero\n");
else
printf("%.2f",f1/f2);
break;
default:
printf("Invalid char\n");
}
return 0;
}
float my_atof(char *p)
{
int i=0,sign=1;
float t=0,d=0.1;
while(p[i]==' ' || p[i]=='\t')
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
for(;p[i]>='0' && p[i]<='9';i++)
t=t*10+(p[i]-'0');
if(p[i]=='.')
{
i++;
while(p[i]>='0' && p[i]<='9')
{
t=t+(p[i]-'0')*d;
d/=10;
i++;
}
}
return t*sign;
}
