#include <iostream>

class Person {
  public:
    std::string m_publicAttr;
    Person() : m_name("David"), m_publicAttr("I'm a public") { };
  private:
    std::string m_name;
};
