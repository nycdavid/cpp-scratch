#define CATCH_CONFIG_MAIN
#include "../vendor/catch.hpp"
#include "../src/array_vector.hpp"

TEST_CASE("ArrayVector class") {
  SECTION("scratch") {
    ArrayVector av;
    av[0] = 8;

    // REQUIRE(av[0] == 87);
  }
}
