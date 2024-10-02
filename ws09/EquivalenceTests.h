#include <iostream>
#include "Addition.h"

class EquivalenceTests {
public:
    void runTests() {
        testPositiveIntegers();
        testNegativeIntegers();
        testMixedIntegers();
        testZeroValues();
        testLargeIntegers();
    }

private:
    void testPositiveIntegers() {
        Addition addition;
        if (addition.add(5, 10) != 15) {
            std::cout << "Test 1 failed!" << std::endl;
        } else {
            std::cout << "Test 1 passed!" << std::endl;
        }
    }

    void testNegativeIntegers() {
        Addition addition;
        if (addition.add(-4, -5) != -9) {
            std::cout << "Test 2 failed!" << std::endl;
        } else {
            std::cout << "Test 2 passed!" << std::endl;
        }
    }

    void testMixedIntegers() {
        Addition addition;
        if (addition.add(-3, 7) != 4) {
            std::cout << "Test 3 failed!" << std::endl;
        } else {
            std::cout << "Test 3 passed!" << std::endl;
        }
    }

    void testZeroValues() {
        Addition addition;
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 4 failed!" << std::endl;
        } else {
            std::cout << "Test 4 passed!" << std::endl;
        }
    }

    void testLargeIntegers() {
        Addition addition;
        if (addition.add(1000000, 2000000) != 3000000) {
            std::cout << "Test 5 failed!" << std::endl;
        } else {
            std::cout << "Test 5 passed!" << std::endl;
        }
    }
};
