#include <iostream>
using namespace std;

//Bubble Sort O(n2)	 - [ https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_algorithm.htm ]
void BubbleSort(int*a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		bool swap = false;

		for (int j = 0; j < n-1; j++)
		{
			if (a[j] > a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;

				swap = true;
			}
		}

		if (!swap)
		{
			break;
		}
	}
}

//Insertion Sort O(n2) - [ https://www.tutorialspoint.com/data_structures_algorithms/bubble_sort_algorithm.htm ]
void InsertionSort(int* a, int n)
{
	int poz;
	int val;

	for (int i = 1; i < n; i++)
	{
		val = a[i];
		poz = i;

		while(poz > 0 && a[poz-1] > val)
		{
			a[poz] = a[poz-1];
			poz--;
		}
		if (poz != i)
		{
			a[poz] = val;
		}
	}
}

//Selection Sort O(n2) - [ https://www.tutorialspoint.com/data_structures_algorithms/selection_sort_algorithm.htm ]
void SelectionSort(int* a, int n)
{
	for (int i = 0; i < n-1; i++)
	{
		int min = i;
		for (int j = i+1; j < n; j++)
		{
			if (a[j] < a[min])
			{
				min = j;
			}
		}

		if (i != min)
		{
			int temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
}

int main()
{
    int a[] = {2,3,4,6,7,8,9,10,11,1,5};
    int n= (sizeof(a)/sizeof(a[0]));

    //BubbleSort(a, n);
    //InsertionSort(a, n);
    SelectionSort(a, n);
    

    for (int i = 0; i < n; i++)
    {
    	if (i == n-1)
    		cout << a[i];
    	else
    		cout << a[i] << "-";
    }
    cout << endl;

    return 0;
}
