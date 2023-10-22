#include <iostream>

using namespace std;

int main()
{
    //creating an array
    int num,i;
    cout<<"enter the n value:";
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++)
    {
        cout<<"enter the element:";
        cin>>arr[i];
    }
    //precomputing
    int hash[10]={0};
    for(i=0;i<num;i++)
    {
        hash[arr[i]]+=1;
    }
    int query;
    cout<<"Enter the element to check how many times it has appeared in array:";
    cin>>query;
    cout<<hash[query];
    return 0;
}
