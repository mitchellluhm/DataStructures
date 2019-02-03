#include "StackNode.h"

StackNode::StackNode() {}

StackNode::StackNode(int d) {
	data = d;
}

int StackNode::getData() {
    return data;
}

StackNode *StackNode::getBelow() {
    return below;
}

void StackNode::setData(int d) {
    data = d;
}

void StackNode::setBelow(StackNode *n) {
    below = n;
}
