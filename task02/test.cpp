#include "test.h"

void test(string expected, string test_name) {
	int number = MOOD_NUMBER * 4;
	bool flag = false;

	for (int i = 0; i < number; i++) {
		if (detect_mood() == expected) {
			flag = true;
			break;
		}

	}

	string actual = detect_mood();
	string msg = test_name + " ---> ";

	msg += (flag ? "PASS" : "FAIL");
	cout << msg << endl;
}

void run_all_tests() {
	test(HAPPY_MOOD, "test01");
	test(GOOD_MOOD, "test02");
	test(BAD_MOOD, "test03");
	test(NERVOUS_MOOD, "test04");
	test(SHOUTED_MOOD, "test05");

}