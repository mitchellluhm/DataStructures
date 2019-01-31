/*
 * StackNode.h
 *
 *  Created on: Jan 30, 2019
 *      Author: mitchell
 */

#ifndef STACKNODE_H_
#define STACKNODE_H_

class StackNode {
private:
	int data;
	StackNode below;
public:
	StackNode(int d);
	void setData(int d);
};



#endif /* STACKNODE_H_ */
