#include"LinkedList1.h"
#include<cstddef> //to understand null file
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node*next;

};
Node*head = NULL; //the list is now empty
void LinkedList::createFirstNode(int val){
 head=new Node();
 head->data=val;
 head->next=NULL;
}
void LinkedList::addItemAtFront(int val){
    Node*temp=new Node();
    temp->data=val;
    temp->next=head;
    head=temp;
}

void LinkedList::printList(){

Node*temp=head;
cout<< temp->data <<" " ;
while (temp->next!=NULL){

    temp=temp->next;
    cout<< temp->data <<" ";
}
cout <<endl;
}
void LinkedList::addItemAtBack(int val){
  Node*temp1=new Node();
  Node*temp2=head;
  while (temp2->next!=NULL)
    temp2=temp2->next;
    temp1->data=val;
    temp1->next=NULL;
    temp2->next=temp1;
}

int LinkedList::sizeList(){

if (head==NULL)
  return 0;
  Node*temp=head;
  int length = 1;

  while(temp->next!=NULL)
  {
      length++;
      temp=temp->next;
  }
return length;

}
bool LinkedList::searchList(int key){

  Node*temp=head;
  bool flag=false;
  if (temp==NULL)
    return false;
  while(temp->next!=NULL)
  {
      if(temp->data==key){

        flag=true;
        break;
      }
      temp=temp->next;

}
if(temp->data==key)
    flag=true;
    return flag;

}

