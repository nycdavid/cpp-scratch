#include <iostream>
#include <map>
#include <vector>

class MapProxy {
  public:
    MapProxy();
    void Register(std::string key, std::vector<std::string> value);
    void Register(std::string key, std::string value);
  private:
    std::map<std::string, std::string> m_strMap;
    std::map<std::string, std::vector<std::string>> m_vctMap;
};

MapProxy::MapProxy() {
}

void MapProxy::Register(std::string key, std::vector<std::string> value) {
  m_vctMap[key] = value;
}

void MapProxy::Register(std::string key, std::string value) {
  m_strMap[key] = value;
}

int main() {
  MapProxy m;
  std::vector<std::string> ourNames = { "Jane", "David", "Pelin" };
  m.Register("name", "David");
  m.Register("our_names", ourNames);
  std::vector<std::string> retrievedNames = m["our_names"];

  std::cout << "Our names are: ";
  for (int i = 0; i != retrievedNames.size(); ++i) {
    std::cout << retrievedNames[i];
  }
  std::cout << std::endl;
  // std::cout << "My name is: " << m["name"] << std::endl;
  return 0;
}
