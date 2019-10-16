
#include <iostream>

using namespace std;

template <class E>
class GenStack
{
  public:
    //GenStack(); // constructor
    GenStack(int maxSize); //overload constructor
    ~GenStack(); //destructor
    int size();
    void push(E);
    E pop();
    E peek();

    bool isFull();

  private:
    int maxSize;
    int cap;
    int top;
    E *myArray;
};

template <class E>
GenStack<E>::GenStack(int maxSize)
{
  //initialization of default values
  myArray = new E[maxSize];
  cap = maxSize;
  top = -1;
}

template <class E>
GenStack<E>::~GenStack()
{
  delete[] myArray; //https://www.techiedelight.com/stack-implementation-in-cpp/
}

template <class E>
void GenStack<E>::push(E e)
{
  //need to check error/boundary check
  if (size() == maxSize) {
    //throw StackFull("the stack is full");
    cout << "the stack is full" << endl;
  }
  myArray[++top] = e;
}

template <class E>
E GenStack<E>::pop() //throw(StackEmpty)
{
  //error checking, make sure its not isEmpty
  if (isEmpty()) {
    //throw StackEmpty("The stack is empty");
    cout << "The stack is empty" << endl;
  }
  return myArray[top--];
}

template <class E>
E GenStack<E>::peek() //throw(StackEmpty)
{
  //check if isEmpty
  if (isEmpty()) {
    //throw StackEmpty("the stack is empty");
    cout << "The stack is empty" << endl;
  }
  //cout<< "returning top element:" << endl;
  return myArray[top];
}

template <class E>
bool GenStack<E>::isFull()
{
  return (top == cap-1);
}

template <class E>
bool GenStack<E>::isEmpty()
{
  return (top == -1);
}

template <class E>
int GenStack<E>::size()
{
  return top+1;
}
