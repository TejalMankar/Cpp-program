// Swap 

#include<iostream>
using namespace std;

template<class T>

void swap(T &No1, T &No2)
{
    T Temp;
    Temp = No1;
    No1 = No2;
    No2 = Temp;  
}

int main()
{
    double dValue1 = 101.9589;
    double dValue2 = 204.6256;

    cout<<"Value of iValue1 : "<<dValue1<<"\n";
    cout<<"Value of iValue2 : "<<dValue2<<"\n";

    swap(dValue1, dValue2);

    cout<<"Value of iValue1 : "<<dValue1<<"\n";
    cout<<"Value of iValue2 : "<<dValue2<<"\n";

    return 0;
}