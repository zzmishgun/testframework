#include <iostream>
#include <vector>
#include <functional>

// A simple assertion function
#define ASSERT(condition) \
    do { \
        if (!(condition)) { \
            std::cerr << "Assertion failed: " << #condition << " in " << __FILE__ << " line " << __LINE__ << std::endl; \
            exit(1); \
        } \
    } while (false)

// Test suite structure
struct TestSuite {
    std::string name;
    std::vector<std::function<void()>> tests;
};

// A function to run all tests in a test suite
void runTests(const TestSuite& suite) {
    std::cout << "Running tests in suite: " << suite.name << std::endl;
    for (const auto& test : suite.tests) {
        std::cout << "  Running test: ";
        test();
        std::cout << "  [OK]" << std::endl;
    }
}

// Sample test functions
void testAddition() {
    int result = 2 + 3;
    ASSERT(result == 5);
}

void testSubtraction() {
    int result = 5 - 3;
    ASSERT(result == 2);
}

void testMultiplication() {
    int result = 2 * 3;
    ASSERT(result == 6);
}

int main() {
    TestSuite basicMathSuite;
    basicMathSuite.name = "Basic Math Tests";

    // Add your test functions to the suite
    basicMathSuite.tests.push_back(testAddition);
    basicMathSuite.tests.push_back(testSubtraction);
    basicMathSuite.tests.push_back(testMultiplication);

    // Run the tests
    runTests(basicMathSuite);

    return 0;
}
