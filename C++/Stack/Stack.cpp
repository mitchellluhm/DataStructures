#include <iostream>
#include "Stack.h"

using namespace std;

// PUSH Operation
void stack::push(int value) {
    
    StackNode *n;
    n = new StackNode(); // reserve place on heap
    n->setData(value);
    n->setBelow(NULL);
    
    if (top_node != NULL) {
	n->setBelow(top_node);
    }

    top_node = n;
}

// POP Operation
int stack::pop()
{
    StackNode *t;
    if(top_node == NULL) {
        cout << "\nThe stack is empty.";
        return -1;
    } else {
		t = top_node;
		int v = t->getData();
		top_node = top_node->getBelow();
		delete t;
		return v;
    }
}

// Show stack
void stack::show()
{
    StackNode *t = top_node;
    cout << "\nThe stack is\n";
    while(t != NULL)
    {
        cout << t->getData() << " -> ";
        t = t->getBelow();
    }
    cout << "NULL\n";
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
