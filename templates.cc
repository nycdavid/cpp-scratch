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
    Data();
    void Foo();
    string* operator[](string key);
    // void operator=(string value);
  private:
    map<string, string> m_strStore;
    map<string, vector<string> > m_vctStore;
};

Data::Data() {
}

void Data::Foo() {
  cout << "Foo" << endl;
}

string* Data::operator[](string key) {
  // if key exists
  m_strStore[key] = "";
  return &m_strStore[key];
}

// void Data::operator=(string value) {
//
// }

int main() {
  // How can we create a map that has strings for keys but allows any type of
  // value?
  Data d;
  d.Foo();
  d["foo"] = "bar";
  cout << d["foo"] << endl;
  return 0;
}
