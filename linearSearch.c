/*
* C program to input N numbers and store them in an array.
* Do a linear search for a given key and report success
* or failure.
*/

#include <stdio.h>

int main ()
{ 
	int num, i, keynum, found = 0;

	printf("Enter the number of elements ");
	scanf("%d", &num);

	int array[num];
	printf("Enter the elements one by one \n");

	for (i = 0; i < num; i++)
	{
		scanf("%d", &array[i]);
	}

	printf("Enter the element to be searched ");
	scanf("%d", &keynum);

	/* Linear search begins */

	for (i = 0; i < num ; i++)
	{
		if (keynum == array[i] )
		{	
			found = 1;
			break;
		}
	}

	if (found == 1)
	{
		printf("Element %d is present in the array at position %d\n",keynum,i+1);
	}
	else
	{
		printf("Element %d is not present in the array\n\n",keynum);
	}
	
	
	return 0;
}
