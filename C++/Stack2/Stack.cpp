#include <iostream>
#include "Stack.h"

using namespace std;

// PUSH Operation
void stack::push(int value) {
    struct node *ptr;
    ptr = new node;
    ptr->data = value;
    ptr->next = NULL;

    /*
    StackNode *n;
    n->data = value;
    n->below = NULL;
    */
    if (top != NULL)
        ptr->next = top;
    top = ptr;
}

// POP Operation
int stack::pop()
{
    struct node *temp;
    if(top == NULL) {
        cout<<"\nThe stack is empty.";
        return -1;
    } else {
		temp = top;
		int v = temp->data;
		top = top->next;
		delete temp;
		return v;
    }
}

// Show stack
void stack::show()
{
    struct node *ptr1 = top;
    cout<<"\nThe stack is\n";
    while(ptr1!=NULL)
    {
        cout<<ptr1->data<<" -> ";
        ptr1=ptr1->next;
    }
    cout<<"NULL\n";
}

// Main function
int main()
{
	cout << "MAIN STARTING" << endl;
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.show();

    return 0;
}
