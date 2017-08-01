#include <iostream>
typedef std::string Elem;

class ArrayVector {
  public:
    ArrayVector();
    Elem& operator[](std::string str);
  private:
    Elem* A;
};
