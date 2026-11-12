//above the code

#include<string.h>
#include<stdio.h>
#define num 1234
#define add(x,y) (x+y)

int main()
{
//this is  commend
FILE fp=fopen("data","w");
int a=num,b=10,sum;
fseek(fp,-1,SEEK_CUR);
sum=add(a,b);

printf("%d\n",sum);

/*
this is
multy line
commend
*/

}

//under the code
