/*
 * Stack.h
 *
 *  Created on: Jan 30, 2019
 *      Author: mitchell
 */

#ifndef STACK_H_
#define STACK_H_

#include "StackNode.h"

class Stack {
private:
	int size;
	StackNode top;
public:
	Stack();
	int push(int d);
	int pop();
	int getSize();
};




#endif /* STACK_H_ */
