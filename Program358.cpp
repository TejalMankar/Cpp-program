#include<iostream>
using namespace std;

double Addition(double No1, double No2)
{
    double Ans = 0.0;
    Ans = No1 + No2 ;
    return Ans;
}

int main()
{
    double Value1 = 10.239, Value2 = 11.590, Ret = 0;

    Ret = Addition(Value1, Value2);
    
    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}