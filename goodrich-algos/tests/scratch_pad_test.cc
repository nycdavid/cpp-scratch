#define CATCH_CONFIG_MAIN
#include "../vendor/catch.hpp"
#include "../src/scratch_pad.hpp"

TEST_CASE("ArrayVector class") {
  SECTION("scratch") {
    Person p;

    std::cout << p.m_publicAttr << std::endl;
  }
}
