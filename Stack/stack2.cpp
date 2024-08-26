#include <iostream>
using namespace std;

#define MAX 1000

int stack[MAX];
int top = -1;

// Function to push an element onto the stack
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

// Function to pop an element from the stack
int pop() {
    if (top < 0) {
        cout << "Stack Underflow" << endl;
        return -1;
    } else {
        int x = stack[top--];
        return x;
    }
}

// Function to get the top element of the stack
int peek() {
    if (top < 0) {
        cout << "Stack is Empty" << endl;
        return -1;
    } else {
        return stack[top];
    }
}

// Function to check if the stack is empty
bool isEmpty() {
    return (top < 0);
}

int main() {
    push(10);
    push(20);
    push(30);
    int poppedElement = pop();
    if (poppedElement != -1) {
        cout << poppedElement << " popped from stack" << endl;
    }

    // Print top element of stack after pop
    int topElement = peek();
    if (topElement != -1) {
        cout << "Top element is : " << topElement << endl;
    }

    // Print all elements in stack
    cout << "Elements present in stack: ";
    while (!isEmpty()) {
        int element = peek();
        if (element != -1) {
            cout << element << " ";
            pop();
        }
    }

    return 0;
}
