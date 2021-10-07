#include<iostream>
using namespace std;
int main()
{
    int size,i,num;
    cout<<"Enter the size you want of your array"<<"\n";
    cin>>size;
    int arr[size];
    cout<<"Enter numbers for you array\n";
    for(i=0;i<size;i++)
    {
        cin>>num;
    }
    
    return 0;
}