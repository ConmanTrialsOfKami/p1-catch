#include <catch2/catch_test_macros.hpp>
#include <iostream>

// uncomment and replace the following with your own headers
// #include "AVL.h"

using namespace std;

// the syntax for defining a test is below. It is important for the name to be unique, but you can group multiple tests with [tags]. A test can have [multiple][tags] using that syntax.
TEST_CASE("Example Test Name - Change me!", "[flag]"){
	// instantiate any class members that you need to test here
	int one = 1;

	// anything that evaluates to false in a REQUIRE block will result in a failing test 
	REQUIRE(one == 0); // fix me!

	// all REQUIRE blocks must evaluate to true for the whole test to pass
	REQUIRE(false); // also fix me!
}

TEST_CASE("Test 2", "[flag]"){
	// you can also use "sections" to share setup code between tests, for example:
	int one = 1;

	SECTION("num is 2") {
		int num = one + 1;
		REQUIRE(num == 2);
	};

	SECTION("num is 3") {
		int num = one + 2;
		REQUIRE(num == 3);
	};

	// each section runs the setup code independently to ensure that they don't affect each other
}

// you must write 5 unique, meaningful tests for credit on the testing portion of this project!

// the provided test from the template is below.

TEST_CASE("Example BST Insert", "[flag]"){
	/*
		MyAVLTree tree;   // Create a Tree object
		tree.insert(3);
		tree.insert(2);
		tree.insert(1);
		std::vector<int> actualOutput = tree.inorder();
		std::vector<int> expectedOutput = {1, 2, 3};
		REQUIRE(expectedOutput.size() == actualOutput.size());
		REQUIRE(actualOutput == expectedOutput);
	*/
}

TEST_CASE("[P1] Incorrect commands for the 5", "[P1][cli]") {
	SUCCEED("Placeholder for the 5 incorrect commands");

}

TEST_CASE("[P2] Insert and rotations (LL, RR, LR, RL)", "[P2][api]") {
    SECTION("LL rotation (30, 20, 10)") {
        SUCCEED("Placeholder LL rotation");
    }
    SECTION("RR rotation (10, 20, 30)") {
        SUCCEED("Placeholder RR rotation");
    }
    SECTION("LR rotation (30, 10, 20)") {
        SUCCEED("Placeholder LR rotation");
    }
    SECTION("RL rotation (10, 30, 20)") {
        SUCCEED("Placeholder RL rotation");
    }
}

TEST_CASE("[P3] Bulk insert 100, remove 10, verify inorder has 90") {
    SUCCEED("Placeholder");
}
