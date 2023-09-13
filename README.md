# testframework
We define a simple assertion macro ASSERT(condition) that checks if a given condition is true, and if not, it prints an error message with the file and line number and exits the program.
We define a TestSuite structure to hold the name of the test suite and a vector of test functions.
We have sample test functions (testAddition, testSubtraction, and testMultiplication) that contain test cases.
In the main function, we create a TestSuite called basicMathSuite, add the test functions to it, and then run the tests using the runTests function.
