/*
 * StackNode.h
 *
 *  Created on: Jan 30, 2019
 *      Author: mitchell
 */

#ifndef STACKNODE_H_
#define STACKNODE_H_

class StackNode {
public:
	int data;
	StackNode *below;
	StackNode(int d);
};



#endif /* STACKNODE_H_ */
