#include<iostream>
#include<vector>
#include<cmath>

using namespace std;
int main()
{
    vector<int> binary;

    int n;
    cout<<"Enter the number :";
    cin>>n;

    int copy=n;
    while(copy!=0)
    {
        int digit=copy%2;
        copy=copy/2;

        binary.insert(binary.begin(),digit);
    }

    vector<int> compliment;
    for(int x:binary)
    {
         if(x==1)
         compliment.push_back(0);
         else
         compliment.push_back(1);
    }

    int num=0;
    int k=0;
    
    for(int i=compliment.size()-1;i>=0;i--)
    {
        num=compliment[i]*pow(2,k)+num;
        k++;
    }

    cout<<num;

     


    
}
