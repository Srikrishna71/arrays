#include <iostream>
#include <queue>
using namespace std;
void interleaveQueue(queue<int>& q) {
    int n = q.size();
    if (n % 2 != 0) {
        cout << "Queue must have even number of elements" << endl;
        return;
    }
    int halfSize = n / 2;
    queue<int> newq;
    for (int i = 0; i < halfSize; i++) {
        newq.push(q.front());
        q.pop();
    }
    while (!newq.empty()) {
        q.push(newq.front());
        newq.pop();
        q.push(q.front());
        q.pop();
    }
}
void printQueue(queue<int>& q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main() {
    queue<int> q;
    q.push(4);
    q.push(7);
    q.push(11);
    q.push(20);
    q.push(5);
    q.push(9);
    interleaveQueue(q);
    printQueue(q);  
    return 0;
}
