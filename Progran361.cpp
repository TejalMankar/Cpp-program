// Swap 

#include<iostream>
using namespace std;

void swap(int &No1, int &No2)
{
    int temp;
    temp = No1;
    No1 = No2;
    No2 = temp;  
}

int main()
{
    int iValue1 = 10;
    int iValue2 = 20;

    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";

    swap(iValue1, iValue2);

    cout<<"Value of iValue1 : "<<iValue1<<"\n";
    cout<<"Value of iValue2 : "<<iValue2<<"\n";

    return 0;
}