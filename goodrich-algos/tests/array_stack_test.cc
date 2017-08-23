#include "../vendor/catch.hpp"
#include "../src/array_stack.hpp"

TEST_CASE("ArrayStack push") {
  SECTION("it initializes") {
    ArrayStack<int> as;
    as.push(9);
    as.push(10);

    REQUIRE(as.top() == 10);
  }
}
