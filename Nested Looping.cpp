#include<iostream>
using namespace std;
int main()
{
    cout<<"==========PERKALIAN DASAR========="<<endl;
    int a,b;
    for(int a=1;a<10;a++)
    {
        for(int b=1;b<10;b++)
        {
            cout<< a <<" * "<< b <<" = ";
            cout<<a*b<<"\n"<<endl;
        }
        cout<<"\n finish\n "<<endl;
    }
    return 0;
}
