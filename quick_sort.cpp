#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high)
{
    int pivot=arr[low]; 
    int count=0;
    for(int i=low+1;i<=high;i++)
    {
        if(arr[i]<=pivot)
        count++;
    }
    int pivotindex=low+count;
    swap(arr[pivotindex],arr[low]);
    //sorting left and right sides of the pivot value
    int i=low;
    int j=high;
    while(i<pivotindex && j>pivotindex)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<pivotindex && j>pivotindex)
        {
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}
void quick_sort(int arr[],int low ,int high)
{
    if(low>=high)
    {
        return;
    }
    int p=partition(arr,low,high);
    quick_sort(arr,low,p-1);
    quick_sort(arr,p+1,high);
}
int main()
{
    int arr[]={4,6,2,5,7,9,1,3};
    int i;
    int n=8;
    cout<<"before sorting: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    quick_sort(arr,0,n-1);
    cout<<endl<<"after quick sort: ";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}