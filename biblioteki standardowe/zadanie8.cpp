#include <iostream>
#include <string>
#include <algorithm>


int main() {
	int num = 1234324561;
	std::string str = std::to_string(num);
	std::cout << count(begin(str), end(str), '1');
	return 0;
}