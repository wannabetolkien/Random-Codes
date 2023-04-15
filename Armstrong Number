#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p=n;
    int sum=0;

    int digit=log10(n)+1;
    
    for(int i=0;i<digit;i++)
    {
        int d=p%10;
        p=p/10;
        sum=sum+pow(d,digit);
    }

    if(n==sum)
    cout<<"Armstrong Number"<<endl;
    else
    cout<<"Not an Armstrong Number"<<endl;
    
    
    return 0;
}
