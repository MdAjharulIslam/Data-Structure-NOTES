#include <iostream>
using namespace std;

#define MAX 1000

int stack[MAX];
int top = -1;

bool push(int x) {
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow" << endl;
        return false;
    } else {
        stack[++top] = x;
        cout << x << " pushed into stack" << endl;
        return true;
    }
}

int pop() {
    if (top < 0) {
        cout << "Stack Underflow" << endl;
        return -1;
    } else {
        int x = stack[top--];
        return x;
    }
}

int peek() {
    if (top < 0) {
        cout << "Stack is Empty" << endl;
        return -1;
    } else {
        return stack[top];
    }
}

bool isEmpty() {
    return (top < 0);
}

int main() {
    push(10);
    push(20);
    push(30);
    cout << pop() << " popped from stack" << endl;

    // Print top element of stack after pop
    cout << "Top element is : " << peek() << endl;

    // Print all elements in stack:
    cout << "Elements present in stack : ";
    while (!isEmpty()) {
        cout << peek() << " ";
        pop();
    }

    return 0;
}
