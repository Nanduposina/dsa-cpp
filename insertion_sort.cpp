#include <bits/stdc++.h> 
using namespace std; 

void bubbleSort(int arr[], int n) 
{ 
	int i, j; 
	for (i = n-1; i >=0; i--) 
		for (j = 0; j <=i - 1; j++) 
			if (arr[j] > arr[j + 1]) 
				swap(arr[j], arr[j + 1]); 
} 
int main() 
{ 
	int n,i;
	cout<<"enter n value:";
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
	{
	    cout<<"enter element:";
	    cin>>arr[i];
	}
	bubbleSort(arr, n); 
	cout << "Sorted array: \n"; 
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";    
    }
	return 0; 
}
