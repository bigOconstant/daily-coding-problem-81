// problem87.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <cassert>
#include <vector>
#include <map>
#include <string>
using namespace std;

std::vector<std::string> enumerate(std::vector<std::string>);

int main()
{
	std::vector<std::string> phonevector;
	std::map<char,std::string> phonekeys;
	auto two = "abc";
	auto three = "def";
	auto four = "ghi";
	phonekeys['2'] = two;
	phonekeys['3'] = three;
	phonekeys['4'] = four;

	string testcase1 = "234";

	for (auto it = testcase1.begin(); it < testcase1.end(); it++) {
		phonevector.push_back(phonekeys[*it]);
	}

	auto output = enumerate(phonevector);
	
	for (auto it = output.begin(); it != output.end(); ++i)
		std::cout << *it << ' ';
	cout << "\n";

	
	return 0;

}

std::vector<std::string> enumerate(std::vector<std::string> input) {
	if (input.size() == 1) {
		return input;
	}

	if (input.size() == 2) {
		auto firstpart = input[0];
		auto secondpart = input[1];
		std::vector<std::string> stringbuilt;

		for (auto it = firstpart.begin(); it < firstpart.end(); it++) {
			for (auto jit = secondpart.begin(); jit < secondpart.end(); jit++) {
				stringbuilt.push_back(string() + *it + *jit);
				
			}
		}
		return stringbuilt;
	}

	auto firstpart = input[0];
	input.erase(input.begin());
	auto secondpart = enumerate(input);
	std::vector<std::string> stringbuilt;

	for (auto it = firstpart.begin(); it < firstpart.end(); it++) {
		for (auto jit = secondpart.begin(); jit < secondpart.end(); jit++) {
			stringbuilt.push_back(string() + *it + *jit);

		}
	}
	return stringbuilt;


}

