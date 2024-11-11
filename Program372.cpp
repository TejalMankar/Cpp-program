// Without OOP 

#include<iostream>
using namespace std;

int Addition(int Arr, int Length)
{   
    int iSum = 0, iCnt = 0;

    for(iCnt = 0; iCnt < Length; iCnt++)
    {
        iSum = iSum + Arr[iCnt];
    }
}

int main()
{
    int Size = 0, iCnt =0, Ret = 0;
    int *ptr = NULL;

    cout<<"Enter the number of elemenets : "<<"\n";
    cin>>Size;

    ptr = new int[Size];

    cout<<"Enter the elements : "<<"\n";
    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin>>ptr[iCnt];
    }

    Ret = Addition(ptr, Size)
    cout<<"Addition is : "<<Ret<<"\n";

    delete[]ptr;

    return 0;
}