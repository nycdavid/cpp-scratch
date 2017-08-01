#include "array_vector.hpp"

ArrayVector::ArrayVector() {
  Elem* A[5]; // stores 5 string elements
}

Elem& ArrayVector::operator[](int idx) {
  return A[idx]; // returns a string element
}
