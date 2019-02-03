#include <iostream>
#include "Queue.h"

Queue::Queue() {
    arr_length = 10;
    arr   = new int[arr_length]; 
    size  = 0;
    first = -1;
    last  = -1;
}

int Queue::add(int d) {
    if (first == -1) {
	first = 0;
	arr[first] = d;
	last = 0;
    } else {
	last++;

	if (last >= arr_length) {
	    // need to increase space for array
	    int actual_size = (last - first);
	    int *temp = new int[actual_size];

	    for (int i = first; i < last; i++) {
		temp[i - first] = arr[i];
		std::cout << "cp " << temp[i - first] << std::endl;
	    }
	    
	    delete[] arr;
	    arr_length = arr_length * 2;
	    arr = new int[arr_length];

	    for (int i = 0; i < actual_size; i++) {
		arr[i] = temp[i];
	    }

	    first = 0;
	    last = actual_size - 1;

	    delete[] temp;

	    last++;
	}

	arr[last] = d;
    }
    size++;
    
    return last;
}

int Queue::pop() {
    if (first > -1) {
	int ret = arr[first];
	size--;
	if (size > 0) {
	    first++;
	} else {
	    first = -1;
	    last = -1;
	}
	return ret;
    } else {
	return -1;
    }
}

void Queue::printQ() {
    for (int i = first; i <= last; i++) {
	std::cout << "Element " << i << " : " << arr[i] << std::endl;
    }
}

int main() {
    Queue q;
    q.add(1);
    q.add(2);
    q.add(2);
    q.add(2);
    q.add(2);
    q.add(2);
    q.add(2);
    q.add(2);
    q.add(2);
    q.add(2);
    q.add(2);
    q.add(2);
    q.add(2);
    q.printQ();
    return 0;
}
