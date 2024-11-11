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
        }

        void InsertFirst(int no);
        void InsertLast(int no);
        void InsertAtPos(int no, int ipos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteATPos(int ipos);
        void Display();
        
}


int main()
{
    SinglyLL obj();

    obj.InsertFisrt(51);
    obj.InsertFisrt(21);
    obj.InsertFirst(11);

    Display
    return 0;
}