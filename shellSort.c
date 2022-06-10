/*
	Write a program to implement shell sort.
*/

 
#include<stdio.h>
void ShellSort(int a[], int n)
{
	int i, j, inc, tmp;
	for(inc = n/2; inc > 0; inc /= 2)
	{
		for(i = inc; i < n; i++)
		{
			tmp = a[i];
			for(j = i; j >= inc; j -= inc)
			{
				if(tmp < a[j-inc])
				{
					a[j] = a[j-inc];
				}
				else
				{
					break;
				}
			}
			a[j] = tmp;
		}
	}
}

int main()
{
	int i, n, a[10];
	
	printf("Enter the number of elements :: ");
	scanf("%d",&n);
	
	printf("Enter the elements :: ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	
	ShellSort(a,n);
	
	printf("The sorted elements are :: ");
	for(i = 0; i < n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	
	return 0;
}
