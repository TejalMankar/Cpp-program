#include<iostream>
using namespace std;

template<class T>

T Addition(T No1, T No2)
{
    T Ans = 0.0;
    Ans = No1 + No2 ;
    return Ans;
}

int main()
{
    double dValue1 = 10.239, dValue2 = 11.590, dRet = 0;
    int iValue1 = 10, iValue2 = 11, iRet = 0;
    float fValue1 = 10.9, fValue2 = 11.0, fRet = 0;

    dRet = Addition(dValue1, dValue2);
    cout<<"Addition of double : "<<dRet<<"\n";

    iRet = Addition(iValue1, iValue2);
    cout<<"Addition of int : "<<iRet<<"\n";

    fRet = Addition(fValue1, fValue2);
    cout<<"Addition of float : "<<fRet<<"\n";

    return 0;
}