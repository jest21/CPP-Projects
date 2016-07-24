#include <iostream>

#include <cstdlib>

using namespace std;

/*
Algorithm LinkedList
    1) Start the program
    2) Create a struct node with elements data, self referential pointer next
    3) Use the node in main method and insert data to each node
    4) Create a new node, node->data = input, previousNode->next = node
    5) To traverse start with the first node and move along the list by ptr=ptr->next
    6) Stop the program
*/

struct node{

    int data;

    struct node *next;

}*first,*p, *ptr;


void display(){

    p = new node;

    p = first;

    if(p == NULL){

        cout<<"\nNothing to Display\n";

    }else{

        while(p!=NULL){

            cout<<endl<<p->data;

            p = p->next;

        }

        cout << "\n";

    }

}

int main(){

    int choice;

    bool isFirst = true;

    while(true){

        cout<<"\n1. Insert\n2. Display\n3. Quit\n";

        cout<<"\nEnter your choice: ";

        cin>>choice;

        switch(choice){

            case 1:

                if (isFirst)
                {
                    p = new node;
                    cout << "\nEnter data to be inserted: ";
                    cin >> p->data;
                    isFirst = false;
                    first = p;
                    ptr = first;
                }else{
                    p = new node;
                    cout << "\nEnter data to be inserted: ";
                    cin >> p->data;
                    ptr->next = p;
                    ptr = p;                    
                }

                break;

            case 2:

                display();

                break;

            case 3:

                exit(0);

                break;

            default:

                cout<<"\nInvalid Input. Try again! \n";

                break;

        }

    }

    return 0;

}