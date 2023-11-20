#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter the elements"<<endl;
    for(int &x:array)
    cin>>x;

    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(array[i]!=array[j])
            {
                c++;
            }
        }
        if(c==n-1)
        {
            cout<<"The Number that hasn't been repeated is "<<array[i]<<endl;
        }
    }

}
