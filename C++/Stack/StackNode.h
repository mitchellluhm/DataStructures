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
    StackNode *below;
public:
    
    /* Constructors */
    StackNode(void);
    StackNode(int d);

    /* Getters */
    int getData(void);
    StackNode *getBelow(void);

    /* Setters */
    void setData(int d);
    void setBelow(StackNode *n);
};



#endif /* STACKNODE_H_ */
