#include<iostream>
using namespace std;

typedef struct node
{
    int data;
    struct node*next;
}NODE,*PNODE,*PPNODE;

class SinglyLL
{
    public:
        PNODE first;
        int count;

        SinglyLL()
        {
            first = NULL;
            int count = 0;

            cout<<"Inside constructor\n";
        }

        void InsertFirst(int no)
        {

        }
        void InsertLast(int no)
        {

        }
        void Display()
        {

        }      
};


int main()
{
    SinglyLL obj;

    obj.InsertFisrt(51);
    obj.InsertFisrt(21);
    obj.InsertFirst(11);

    obj.Display();

    cout<<"Number of elements in linked list are: \n"
    return 0;
}