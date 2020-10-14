#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<char> arr;
    int length;
    char ch;
    cout<<"Enter length\n";
    cin>>length;
    for(int i=0;i<length;i++)
    {
        cin>>ch;
        arr.push_back(ch);
    }
    for(int i=0;i<length/2;i++)
    {
        char temp=arr[i];
        arr[i]=arr[length-1-i];
        arr[length-1-i]=temp;
    }

    for(int i=0;i<length;i++)
    {
        cout<<arr[i];
    }
}
