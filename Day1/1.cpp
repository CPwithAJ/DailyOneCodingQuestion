# include <stdio.h>
#define MAX 100000

void checkPairs(int array[], int array_size, int key)
{
  int i, temp;
  int hashTable[MAX] = {0};
	for(i = 0; i < array_size; i++)
	{
		temp = key - array [i];
		if (temp >= 0 && hashTable[temp] == 1)
			printf("Elements are present\n");

		hashTable[ array[i] ] = 1;
	}
}



int main()
{
    int array[] = {1,2,3,4,5,6};
    int key = 11;
    int array_size = 6;

	checkPairs(array, array_size, key);

     return 0;
}
