#include <iostream>

using namespace std;

class CircularQueue {
private:
    int front, rear, size;
    float* arr;

public:
    CircularQueue(int n) {
        size = n;
        front = rear = -1;
        arr = new float[size];
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return (rear + 1) % size == front;
    }

    void enqueue(float value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = value;
        cout << "Enqueued: " << value << endl;
    }

    float dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue." << endl;
            return -1.0; 
        }

        float value = arr[front];

        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % size;
        }

        return value;
    }

    void displayDequeueResults(int count) {
        cout << "Dequeue Results:" << endl;
        for (int i = 0; i < count; ++i) {
            float value = dequeue();
            if (value != -1.0) {
                cout << "Dequeued: " << value << endl;
            }
        }
    }

    ~CircularQueue() {
        delete[] arr;
    }
};

int main() {
    int N;
    cout << "Enter the size of the Circular Queue: ";
    cin >> N;

    CircularQueue cq(N);

    for (int i = 0; i < N; ++i) {
        float value;
        cout << "Enter value for enqueue: ";
        cin >> value;
        cq.enqueue(value);
    }

    int dequeueCount = min(5, N); 
    cq.displayDequeueResults(dequeueCount);

    return 0;
}

