#include <iostream>
#include <vector>
#include <algorithm>

int main() 
{
	setlocale(LC_ALL, "RUS");
	std::vector <int> vi {4, 7, 9, 14, 12};
	std::cout << "Входные данные: " ;
	for (const auto& i : vi) {
		std::cout << i << ' ';
	}
	std::for_each(vi.begin(), vi.end(), [](int & i) {
		if (i % 2 != 0) 
		{
			i *= 3;
		}
		});
	std::cout << std::endl << "Выходные данные: ";
	for (const auto& i : vi) {
		std::cout << i << ' ';
	}
}