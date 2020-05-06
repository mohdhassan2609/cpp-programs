//you have to complete the function void update (int *a,int *b),which reads two integers as argument ,and sets with in the sum of them ,with absolute differenceof them...input formats:the input will contain two integers and separated by a newline ..output format:you have to print the updated value of and ,on two different lines..Note:input/output will be automatically handled .you only have complete the function described in the 'task'section..
//sample input
//4
//5
//sample  output
//9
//1





#include<stdio.h>
#include<cstdlib>
void update(int *a,int *b)
{
int temp=*a;
*a=*a+*b;
*b=abs(temp-*b);
}
int main()
{
	int a,b;
	int *pa=&a,*pb=&b;
	scanf("%d %d",&a,&b);
	update(pa,pb);
	printf("%d\n%d",a,b);
	return 0;
}
