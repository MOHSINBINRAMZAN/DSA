#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<float> myQueue;

    int n;
    cout << "Enter the value of N: ";
    cin >> n;

    
    cout << "Enter " << n << " float values for enqueue:\n";
    for (int i = 0; i < n; ++i) {
        float value;
        cin >> value;
        myQueue.push(value); 
    }

    
    int dequeueCount = min(5, n);
    cout << "Dequeue results:\n";
    for (int i = 0; i < dequeueCount; ++i) {
        if (!myQueue.empty()) {
            float frontValue = myQueue.front();
        	cout << "Dequeued: " << frontValue << "\n";
            myQueue.pop(); 
        } else {
            cout << "Queue is empty. Cannot dequeue.\n";
        }
    }

    return 0;
}

