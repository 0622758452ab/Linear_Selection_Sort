#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n)
{
	int i, j, min_idx;
	for (i = 0; i < n-1; i++)
	{
		min_idx = i;
		for (j = i+1; j < n; j++){
		if (arr[j] < arr[min_idx])
			min_idx = j;
		}
		
		if(min_idx!=i){
	        int temp = arr[min_idx];
	        arr[min_idx] = arr[i];
	        arr[i] = temp;
		}
	}
}

int main()
{
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cout << "Enter Value index " << i << ": ";
        cin >> arr[i];
    }
    cout << "Unsorted array: \n";
    for(int i=0 ; i<n ; i++)
        cout << arr[i] << " ";
    cout << endl;
	selectionSort(arr, n);
	cout << "Sorted array: \n";
	for(int i=0 ; i<n ; i++)
        cout << arr[i] << " ";
    cout << endl;
	return 0;
}
