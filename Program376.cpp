#include<iostream>
using namespace std;

class Array
{
    public:
        int *Arr;
        int Size;

        Array(int Length);
        ~Array();
        void Accept();
        void Display();
        int Addition();
      
};

int Array :: Addition();
{

}

Array :: Array(int Length)
{
    Size = Length;
    Arr = new int[Size];
}

Array :: ~Array()
{
    delete []Arr;
}

void Array :: Accept()
{
    cout<<"Enter the elements : "<<"\n";
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cin<<Arr[iCnt];
    }
}

void Array :: Display()
{
    cout<<"Elements of the array is : "<<"\n";
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Arr[iCnt]<<"\n";
    } 
}

int main()
{

    obj 

    obj.Accept();
    obj.Display();
    
    return 0;
}