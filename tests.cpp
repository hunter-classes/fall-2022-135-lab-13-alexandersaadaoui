#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <string>
#include "funcs.h"
#include "doctest.h"

TEST_CASE("A") {
    CHECK(printRange(-2,10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(5,1) == "");
    CHECK(printRange(0,3) == "0 1 2 3");
    CHECK(printRange(-5,1) == "-5 -4 -3 -2 -1 0 1");
}

TEST_CASE("B") {
    CHECK(sumRange(-2, 10) == 52);
    CHECK(sumRange(0, 0) == 0);
    CHECK(sumRange(0, 4) == 10);
}

TEST_CASE("C") {
    int size = 6;
    int array[6] = {5, 10, 6, -2, 8, 0};
    int *arr = array;
    CHECK(sumArray(arr, size) == 27);
    CHECK(sumArray(arr, 2) == 15);
    CHECK(sumArray(arr, 0) == 0);
}

TEST_CASE("D") {
    CHECK(isAlphanumeric("Abcd1234xyz")); // true (1)
    CHECK(!isAlphanumeric("KLMN 8-7-6"));  // false (0)
    std::string msg = "ABCDEFGH";
    CHECK(isAlphanumeric(msg.substr(2, 4)));   // CDEF (start at char [2] and
}

TEST_CASE("E") {
    CHECK(nestedParens("()"));          // true (1)
    CHECK(nestedParens(""));            // true (1)
    CHECK(!nestedParens("((("));         // false (0)
    CHECK(!nestedParens("(()"));         // false (0)
    CHECK(!nestedParens(")("));          // false (0)
    CHECK(!nestedParens("a(b)c"));       // false (0)
}