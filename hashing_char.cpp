#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout<<"Enter the  string: ";
    cin>>s;
    
    //precomputing
    int hash[256]={0};
    for(int i=0;i<s.size();i++)
    {
        hash[s[i]]++;
    }
    char ch;
    cout<<"Enter the character to check how many times it appeared in string by hashing: ";
    cin>>ch;
    cout<<ch<<" has appeared "<< hash[ch] <<" times";
    return 0;
}