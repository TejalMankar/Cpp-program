// Swap 

#include<iostream>
using namespace std;

void swap(double &No1, double &No2)
{
    double temp;
    temp = No1;
    No1 = No2;
    No2 = temp;  
}

int main()
{
    double iValue1 = 101.9589;
    double iValue2 = 204.6256;

    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";

    swap(iValue1, iValue2);

    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";

    return 0;
}