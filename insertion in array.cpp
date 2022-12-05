#include<iostream>
using namespace std;
int main()
{
    int a[10],no,pos,n;
    cout<<"how many no you enter =";
    cin>>n;
    cout<<"enter elements\n";
    for(int i=0;i<n;i++)
    {

        cin>>a[i];
    }
   for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ,";
    }
    cout<<"\nenter the inserting element";
    cin>>no;
    cin>>pos;
    for(int i=n-1;i>=pos;i--)
    {
        a[i+1]=a[i];
        a[i]=no;

    }
    for(int i=0;i<=n;i++)
    {
        cout<<a[i]<<" ,";
    }
}
