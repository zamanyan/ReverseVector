#include <iostream>
#include <vector>
#include <string>

std::vector<std::string> ReverseVector(std::vector<std::string>& vec)
{
	std::vector<std::string> reversed_vector;
	for (auto it = vec.rbegin(); it != vec.rend(); it++)
	{
		reversed_vector.push_back(*it);
	}
	return reversed_vector;
}

void PrintVector(const std::vector<std::string>& vec)
{
	for (auto i : vec)
	{
		std::cout << i << ' ';
	}
}

int main()
{
	std::vector<std::string> normal_vector = { "aaa", "bbb", "cccc" };
	std::cout << "normal_vector:   ";
	PrintVector(normal_vector);
	std::vector<std::string> reversed_vector = ReverseVector(normal_vector);
	std::cout << "\nreversed_vector: ";
	PrintVector(reversed_vector);
	return 0;
}