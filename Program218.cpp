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
            PNODE newn = NULL;

            newn = new NODE;
            newn->data = no;
            newn->next = NULL;

            if(first == NULL)
            {
                first = newn;
            }
            else 
            {
                newn->next = first;
                first = newn;

            }
            count++;
        }
        void InsertLast(int no)
        {
            
        }
        void Display()
        {
            PNODE temp = first;

            while(temp != NULL)
            {
                cout<<" | "<<temp->data<<" |-> ";
                temp = temp->next;
            }
            cout<<"NULL\n";

        }      
};


int main()
{
    SinglyLL obj;

    obj.InsertFirstt(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    cout<<"Number of elements in linked list are: "<<obj.Count<<"\n";
    return 0;
}