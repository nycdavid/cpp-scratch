#include <iostream>
#include <vector>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::vector;

class Data {
  public:
    void Foo();
    void operator[](string key);
};

void Data::Foo() {
  cout << "Foo" << endl;
}

void operator[](string key) {
  
}

int main() {
  // How can we create a map that has strings for keys but allows any type of
  // value?
  Data d;
  d.Foo();
  d["foo"] = "bar";
  return 0;
}
