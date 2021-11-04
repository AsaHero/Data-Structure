#include <iostream>

using namespace std;

template <class T>
class Stack{
private:
    T* arr;
    int top;
    int size;
public:

    Stack();
    Stack(int size);
    ~Stack();

    void push(T value);
    T pop();
    T peek();
    bool IsEmpty();
    bool IsFull();
};

template <class T>
Stack<T>::Stack()
{
    this->size = 0;
    this->arr = nullptr;
    this->top = -1;
}

template <class T>
Stack<T>::Stack(int size)
{
    this->size = size;
    arr = new T[this->size];
    this->top = -1;
}

template <class T>
Stack<T>::~Stack()
{
    delete[] this->arr;
} 

template <class T>
void Stack<T>::push(T value)
{
    if(this->top + 1 < this->size)
    {
        this->top++;
        this->arr[top] = value;
    }
    else
        std::cout << "Overflow" << std::endl;

}

template <class T>
T Stack<T>::pop()
{
    if(this->top > -1)
    {
        T temp;
        temp = this->arr[top];
        top--;
        return temp;
    }
    else 
        std::cout << "Underflow" << std::endl;
    
}

template <class T>
T Stack<T>::peek()
{
    return this->arr[top];
}

template <class T>
bool Stack<T>::IsEmpty()
{
    return this->top == -1;
}

template <class T>
bool Stack<T>::IsFull()
{
    return this->top == this->size - 1;
}


int main()
{

    Stack<int> stack(6);

    stack.push(15);
    stack.push(12);
    stack.push(5);
    stack.push(2);
    stack.push(1);
    stack.push(0);

    while (!stack.IsEmpty())
    {
        cout << stack.pop() << endl;
    }
    

    return 0;
}