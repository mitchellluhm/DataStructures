/*
 * Stack.h
 *
 *  Created on: Feb 1, 2019
 *      Author: mitchell
 */

#ifndef STACK_H_
#define STACK_H_

// Creating a class STACK
class stack {
	// Creating a NODE Structure
	struct node
	{
	    int data;
	    struct node *next;
	};

    struct node *top;
    public:
    stack() // constructor
    {
        top = NULL;
    }
    void push(int value); // to insert an element
    int pop();  // to delete an element
    void show(); // to show the stack
};



#endif /* STACK_H_ */
