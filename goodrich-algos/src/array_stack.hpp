#include <iostream>

// ABS == Array-backed Stack
template <typename E>
class ArrayStack {
  enum { DEFAULT_CAPACITY = 100 };
  public:
    void push(E element);
    E top();
    ArrayStack(int cap = DEFAULT_CAPACITY) : ABS(new E[cap]), marker(-1) { };
  private:
    int marker;
    E *ABS;
};

template <typename E>
void ArrayStack<E>::push(E element) {
  ++marker;
  ABS[marker] = element;
}

template <typename E>
E ArrayStack<E>::top() {
  std::cout << "The marker is at: " << marker << std::endl;
  return ABS[marker];
}
