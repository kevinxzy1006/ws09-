#include <iostream>
#include "Addition.h"

class UnitTest {
public:
    void runTests() {
        testAddition();
    }

private:
    void testAddition() {
        Addition addition;

        // Test 1: 1 + 2 = 3
        if (addition.add(1, 2) != 3) {
            std::cout << "Test 1 failed!" << std::endl;
        } else {
            std::cout << "Test 1 passed!" << std::endl;
        }

        // Test 2: -1 + 5 = 4
        if (addition.add(-1, 5) != 4) {
            std::cout << "Test 2 failed!" << std::endl;
        } else {
            std::cout << "Test 2 passed!" << std::endl;
        }

        // Test 3: 0 + 0 = 0
        if (addition.add(0, 0) != 0) {
            std::cout << "Test 3 failed!" << std::endl;
        } else {
            std::cout << "Test 3 passed!" << std::endl;
        }

        // Test 4: 100 + 200 = 300
        if (addition.add(100, 200) != 300) {
            std::cout << "Test 4 failed!" << std::endl;
        } else {
            std::cout << "Test 4 passed!" << std::endl;
        }

        // Test 5: -50 + (-70) = -120
        if (addition.add(-50, -70) != -120) {
            std::cout << "Test 5 failed!" << std::endl;
        } else {
            std::cout << "Test 5 passed!" << std::endl;
        }
    }
};
