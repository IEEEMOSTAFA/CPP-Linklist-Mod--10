#include<bits/stdc++.h>
using namespace std;
class node  //nij teke akta structure banannor  junno ei class ta use kore ci
{
public:
    int data;
    node*nxt;


};
class LinkedList
{
    public:
    node*head;//uporer class use korbo tai pointer use korci;
    //head=NULL;
    LinkedList()   //Eta akta constructor .Iniatally head ke 0 kore rakbo
    {
        head=NULL;
    }
    //Creates a new node with data = value and  nxt =NULL
    node* CreateNewNode(int value)//pointer use kore amra notun node create korte pari
    {
         node *newnode = new node;  //Ekane node a je memmory dorkar seta computer tar heap teke dea;
         newnode->data = value;  // kono kice pointer type er structure hole -> ei type er(->) sign use korbo
         newnode->nxt = NULL;
         return newnode;
    }
    //Insert new value at Head
    void InsertAtHead(int value)
    {
        node*a = CreateNewNode(value);
    if(head == NULL)
    {
      head = a;
     return ;
    }
    //If head is not NULL
    a->nxt = head;
    head = a;
    }
    //prints the Linked list
    void Traverse()
    {
     node*a =head;
     while(a!= NULL)
     {
         cout<<a->data<<" ";
         a= a->nxt;
     }
     cout<<"\n";
    }
    //Search for a single value

    int  SearchDistinctValue(int value)
    {
     node* a = head;
     int index =0 ;
     while(a!= NULL)
     {
         if(a->data ==value)
         {
             return index;
         }
         a = a->nxt;
         index++;
     }
     return -1;
    }

    //Search all possible occurrence
    void SearchAlValue(int value)
    {
      node* a = head;
     int index =0 ;
     while(a!= NULL)
     {
         if(a->data ==value)
         {
             //return index;
             cout<<value<<"is found at index " <<index<<"\n";
         }
         a = a->nxt;
         index++;
     }

    }

};
int main()
{
    LinkedList l;  //l dara linklist er akta object create korlam
    l.Traverse();

    l.InsertAtHead(10);
      l.Traverse();

    l.InsertAtHead(30);
      l.Traverse();

    l.InsertAtHead(20);
      l.Traverse();

    l.InsertAtHead(30);
    l.Traverse();


     cout<<"10 is found at "<< l.SearchDistinctValue(10) <<"\n";
    cout<<"5 is found at " << l.SearchDistinctValue(5) <<"\n";
    cout<<"30 is found at  " << l.SearchDistinctValue(30) <<"\n";
    l.SearchAlValue(30);
    return 0;
}
