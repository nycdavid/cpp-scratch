#include <iostream>
typedef int Elem;

class ArrayVector {
  public:
    ArrayVector();
    Elem& operator[](int idx);
  private:
    Elem* A;
};
