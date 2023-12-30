#include<iostream>
using namespace std;
struct node 
{
    int data ;
    node*next;

    public:
    node* crearLInklist(int arr[],int size)
    {
        node*head=nullptr;
        node*tail=nullptr;
        for(int i = 0;i<size;++i)
        {
            node*ptr=new node;
            ptr->data = arr[i];
            ptr->next=nullptr;
            //updtataing linklist 
            if (head==nullptr)
            {
                head=ptr;
                tail=ptr;
            }
            else{
                tail->next=ptr;
                tail=ptr;
            }
        }
         return head;

    }
    //printing the function 
    void printingLINKLIST(node* &head)
    {
        while(head!=nullptr){
        cout << head ->data <<" ";
        head =head ->next;}
    }
        cout<<endl;

        


    
};
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    node* head = crearLInklist(arr, size);

    cout << "Linked List: ";
    printingLINKLIST(head);

    return 0;

}