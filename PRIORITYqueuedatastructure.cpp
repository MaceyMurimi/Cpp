#include<iostream>
#include<queue> 
using namespace std;

class Priority_Queue {
private:
    priority_queue<int> pq; // constructor where the priority queue is stored
public:
    
    bool isEmpty() {
        return pq.empty(); // Used to check whether the queue is empty
    }

    void enqueue(int val) {
        pq.push(val); // Used to add elements to the queue
    }

    int dequeue() {
        int x = 0;
        if (!isEmpty()) {
            x = pq.top(); // Access the highest-priority element using top() function
            pq.pop(); // Remove the highest-priority element
        }
        else {
            cout << "Queue is Empty" << endl;
        }
        return x;
    }

    int count() {
        return pq.size(); // Use size() function to get the number of elements
    }

    void display() {
       
        cout << "Displaying elements of Priority Queue: ";
        while (!pq.empty()) {
            cout << pq.top() << " "; // Display the highest-priority element
            pq.pop(); // Remove the highest-priority element
        }
        cout << endl;
    }
};

int main() {
    Priority_Queue pq1;
    int value, option;
    do {
        cout << "\n\nWhat operation do you want to perform? Select Option number. Enter 0 to exit." << endl;
        cout << "1. Enqueue()" << endl;
        cout << "2. Dequeue()" << endl;
        cout << "3. isEmpty()" << endl;
        cout << "4. count()" << endl;
        cout << "5. display()" << endl;
        cout << "6. Clear Screen" << endl << endl;
        cin >> option;
        switch (option) {
        case 0:
            break;
        case 1:
            cout << "Enqueue Operation \nEnter an item to Enqueue in the Queue" << endl;
            cin >> value;
            pq1.enqueue(value);
            break;
        case 2:
            cout << "Dequeue Operation \nDequeued Value : " << pq1.dequeue() << endl;
            break;
        case 3:
            if (pq1.isEmpty())
                cout << "Queue is Empty" << endl;
            else
                cout << "Queue is not Empty" << endl;
            break;
        case 4:
            cout << "Count Operation \nCount of items in Queue : " << pq1.count() << endl;
            break;
        case 5:
            pq1.display();
            break;
        case 6:
            system("cls");
            break;
        default:
            cout << "Enter Proper Option number " << endl;
        }
    } while (option != 0);
    return 0;
}
