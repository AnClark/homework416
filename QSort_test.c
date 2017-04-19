// QSort_test.c
// 终究还是看了啊哈磊的教程。。。
#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b)
{
	int buff = a;
	a = b;
	b = buff;
}

void quicksort(int *array, int L, int R)
{
	if (L > R)
		return;

	// Pick out a reference number
	int ref = array[L];
	int i = L, j = R;


	while (i != j)
	{
		while (i < j && array[j] >= ref)
			j--;
		while (i < j && array[i] <= ref)
			i++;

		if (i < j)
			swap(array[i], array[j]);

	}

	array[L] = array[i];
	array[i] = ref;

	quicksort(array, L, i - 1);
	quicksort(array, i + 1, R);

}

int main()
{
	int arr[] = { 3, 72, 6 };
	int n = 3;

	quicksort(arr, 0, n - 1);

	int i;
	for (i = 0; i < n; i++)
		printf("%d\t", arr[i]);

}