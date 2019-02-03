
class Queue {
private:
    int arr_length;
    int *arr;
    int size;
    int first;
    int last;

public:
    Queue(void);

    /* Add item to end of queue, return index */
    int add(int d);

    /* Pop item of start of queue, return next first */
    int pop(void);

    int getSize(void) { return size; }

    void setSize(int s) { size = s; }

    void incSize(void) { size = size + 1; }

    void decSize(void) { size = size - 1; }

    void setFirst(int f) { first = f; }

    int getFirst(void) { return first; }

    void setLast(int l) { last = l; }

    int getLast(void) { return last; }

    void printQ(void);
};
