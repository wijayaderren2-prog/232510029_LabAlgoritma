#include <iostream>
using namespace std;

const int MAX = 5;

int stack[MAX];
int top = -1;

bool isEmpty() {
    return top == -1;
}

bool isFull() {
    return top == MAX - 1;
}

void push(int data) {
    if (isFull()) {
        cout << "Stack penuh!\n";
    } else {
        top++;
        stack[top] = data;
    }
}

void pop() {
    if (isEmpty()) {
        cout << "Stack kosong!\n";
    } else {
        cout << "Data yang dihapus : " << stack[top] << endl;
        top--;
    }
}

void peek() {
    if (isEmpty()) {
        cout << "Stack kosong\n";
    } else {
        cout << "Data paling atas : " << stack[top] << endl;
    }
}

void display() {
    if (isEmpty()) {
        cout << "Stack kosong\n";
    } else {
        cout << "\nIsi Stack\n";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << endl;
        }
    }
}

int main() {

    push(621);
    push(999);
    push(201);
    push(94);
    push(124);

    cout << "Stack setelah Push :\n";
    display();

    cout << endl;

    peek();

    cout << endl;

    pop();

    cout << "\nStack setelah Pop\n";
    display();

    return 0;
}
