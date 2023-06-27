#include<iostream>
#include<vector>

using namespace std;


vector<int> _32bit_binary(int n)
{
    vector<int> binary;
    int copy=n;
    while(copy!=0)
    {
        int bit=copy%2;
        copy=copy/2;

        binary.insert(binary.begin(),bit);
    }

    vector<int> _32bit_binary;

    for(int i=0;i<32-binary.size();i++)
    {
        _32bit_binary.push_back(0);
    }
    for(int i=0;i<binary.size();i++)
    {
        _32bit_binary.push_back(binary[i]);
    }

    return _32bit_binary;
}


vector<int> _1s_compliment(int num)
{
    vector<int> binary=_32bit_binary(num);
    vector<int> _1s_compliment;

    for(int i=0;i<binary.size();i++)
    {
        if(binary[i]==0)
        {
            _1s_compliment.push_back(1);
        }
        else
        {
            _1s_compliment.push_back(0);
        }
    }

    return _1s_compliment;


}


vector<int> _2s_compliment(int num)
{   vector<int> _1s_comp=_1s_compliment(num);

    vector<int>_2s_compliment;

    int carry=1;

    for(int i=_1s_comp.size()-1;i>=0;i--)
    {
        if(_1s_comp[i]+carry==2 )
        {
            _2s_compliment.insert(_2s_compliment.begin(),0);
            carry=1;
        }
        else if(carry+_1s_comp[i]==1)
        {
            _2s_compliment.insert(_2s_compliment.begin(),1);
            carry=0;
        }
        else if(carry+_1s_comp[i]==0)
        {
            _2s_compliment.insert(_2s_compliment.begin(),0);
        }
    }

    return _2s_compliment;
}

void binary_converter(int n)
{
    if(n<0)
    {
        vector<int> a= _2s_compliment(n);
        for(int i=0;i<a.size();i++)
        {
            cout<<a[i]<<" ";
        }
    }
    else if(n>0)
    {
        vector<int> b=_32bit_binary(n);
        for(int i=0;i<b.size();i++)
        {
            cout<<b[i]<<" ";
        }
    }
    else
    {
        for(int i=0;i<32;i++)
        {
            cout<<0<<" ";
        }
    }

}
int main()
{
    int n;
    cout<<"Enter the number to be converted :";
    cin>> n;

    binary_converter(n);

    
    return 0;
}

