#include <iostream>
#include <regex>

using std::cout;
using std::string;
using std::regex;
using std::smatch;
using std::regex_search;
using std::sregex_iterator;

void regexSearchExample();
void sregexIterExample();

int main() {
  // regex R = regex("{{[a-zA-Z_]*}}");
  // regex R = regex("(\\{\\{[a-zA-Z_]*\\}\\})");
  // regex R("\\{\\{[a-zA-Z_]*\\}\\}");
  // string s = "<html>{{foo}}Yohoyoho {{foo}} <p>{{what_a_day}}</p></html>";
  // auto begin = std::sregex_iterator(s.begin(), s.end(), R);
  // auto end = std::sregex_iterator();
  //
  // for (std::sregex_iterator i = begin; i != end; ++i) {
  //   std::smatch match = *i;
  //   cout << "Element: " << match.str() << std::endl;
  // }

  regexSearchExample();
  // sregexIterExample();

  return 0;
}

void regexSearchExample() {
  // 1. With no parens, the first match is the entire matched string
  regex R("(\\d{3})-(\\d{3})-(\\d{4})");
  string phone = "646-417-2414";
  smatch m;
  regex_search(phone, m, R);

  for (int i = 0; i != m.size(); i++) {
    cout << "Element: " << m[i] << std::endl;
  }

  // This example matches parts, but doesn't search to the end
}

void sregexIterExample() {
  regex R("(\\d{3})-(\\d{3})-(\\d{4})");
  string phone = "646-417-2414";
  sregex_iterator begin = sregex_iterator(phone.begin(), phone.end(), R);
  sregex_iterator end = sregex_iterator();

  for (sregex_iterator i = begin; i != sregex_iterator(); ++i) {
    smatch m = *i;
    cout << "Element: " << m.str() << std::endl;
  }
}
