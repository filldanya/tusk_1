#include <iostream>
#include <vector>
#include <variant>
#include <cstdlib>
#include <ctime>

std::variant<int, std::string, std::vector<int>> get_variant() {
		std::srand(std::time(nullptr));
		int random_variable = std::rand() % 3;

		std::variant<int, std::string, std::vector<int>> result;
		switch (random_variable)
		{
		case 0:
			result = 5;
			break;
		case 1:
			result = "string";
			break;
		case 2:
			result = std::vector<int>{ 1, 2, 3, 4, 5 };
			break;
		default:
			break;
		}
		return result;
	}

int main() {
	bool is_int = std::holds_alternative <int>(get_variant());
	bool is_string = std::holds_alternative <std::string>(get_variant());
	bool is_vector = std::holds_alternative <std::vector<int>>(get_variant());
	if (is_int)
	{
		int number = std::get<int>(get_variant());
		std::cout << (number * 3);
	}
	else if (is_string)
	{
		std::string stroka = std::get<std::string>(get_variant());
		std::cout << stroka;
	}
	else if (is_vector)
	{
		std::vector<int> vi = std::get<std::vector<int>>(get_variant());
		for (const auto& i : vi) {
			std::cout << i << ' ';
		}
	}
}