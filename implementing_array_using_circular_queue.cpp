#include <iostream>
using namespace std;

class CircularQueue {
private:
    int front; // front index of the queue
    int rear;  // rear index of the queue
    int size;  // size of the queue
    int *arr;  // array to store elements

public:
    CircularQueue(int size) {
        this->size = size;
        front = rear = -1;
        arr = new int[size];
    }

    ~CircularQueue() {
        delete[] arr;
    }

    // Function to check if the queue is empty
    bool isEmpty() {
        return front == -1;
    }

    // Function to check if the queue is full
    bool isFull() {
        return (front == 0 && rear == size - 1) || (rear == (front - 1) % (size - 1));
    }

    // Function to insert an element into the queue
    void enqueue(int item) {
        if (isFull()) {
            cout << "Queue Overflow" << endl;
            return;
        }
        if (front == -1)
            front = 0;
        rear = (rear + 1) % size;
        arr[rear] = item;
    }

    // Function to remove an element from the queue
    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow" << endl;
            return -1;
        }
        int item = arr[front];
        if (front == rear)
            front = rear = -1;
        else
            front = (front + 1) % size;
        return item;
    }

    // Function to display the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = front;
        cout << "Queue elements: ";
        if (front <= rear) {
            while (i <= rear)
                cout << arr[i++] << " ";
        } else {
            while (i < size)
                cout << arr[i++] << " ";
            i = 0;
            while (i <= rear)
                cout << arr[i++] << " ";
        }
        cout << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    // Queue is full now
    q.enqueue(6);

    q.display();

    cout << "Removed element from queue: " << q.dequeue() << endl;

    q.enqueue(6); // Now queue is full again

    q.display();

    return 0;
}
