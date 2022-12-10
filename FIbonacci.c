#include<stdio.h>
int fib(int n);

int main(){
	int f,n;
	printf("Enter the number of elements in the series");
	scanf("%d", n);
	
	f= fib(n);
	
	
	return 0;
}

	int fib(int n)
	{
		if(n==0)
		return 0;
		
		else if (n==1)
		return 1;
		
		else
		return n+(n-1) ;
	}