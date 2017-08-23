#include <iostream>

template <typename E>
class ArrayStack {
  public:
    ArrayStack(int cap = 100);
    void push(const E &e);
  private:
    E *S; // Memory address of the array gets dereferenced, returning the array.
};

template <typename E> ArrayStack<E>::ArrayStack(int cap) {
  int nine = 9;
  S = &nine;
  // E foo[cap];
  // S = foo;
  // S[0] = 9000;
  std::cout << S[0] << std::endl;
}

// A integer array of size 50.
int numbers[50];
