#include <iostream>
#include <vector>
#include <map>

using std::cout;
using std::endl;
using std::map;
using std::vector;
using std::string;

class Data {
  public:
    void Foo();
    map<string, string> operator[](string key);
};

void Data::Foo() {
  cout << "Foo" << endl;
}

map<string, string> Data::operator[](string key) {
  map<string, string> internal;
  return internal["key"];
}

int main() {
  // How can we create a map that has strings for keys but allows any type of
  // value?
  Data d;
  d.Foo();
  d["foo"] = "bar";
  return 0;
}
