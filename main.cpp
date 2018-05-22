#include <iostream>

using namespace std;

int main()
{
    LinkedList1 s;
    s.createFirstNode(3);
    s.addItemAtFront(5);
    s.addItemAtFront(7);
    s.addItemAtFront(9);
    s.addItemAtFront(9);
    s.addItemAtFront(9);
    s.printList();

    cout<< "The size of the list is= "<<s.sizeList()<<endl;

    s.addItemAtBack(6);
    s.printList();

    cout<<"\n The size of the list= "<<s.sizeList()<<endl;

    if (s.searchList(9))
        cout<<"\n" <<"it is in the List!" << endl;
    else
        cout<<"\n" <<"it is not in the List!" << endl;
}

