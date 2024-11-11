// Swap 

#include<iostream>
using namespace std;

void  swap(float &No1, float &No2)
{
    float temp;
    temp = No1;
    No1 = No2;
    No2 = temp;  
}

int main()
{
    float iValue1 = 10.9;
    float iValue2 = 20.6;

    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";

    swap(iValue1, iValue2);

    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";

    return 0;
}