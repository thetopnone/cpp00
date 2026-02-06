#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char *argv[])
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std ::endl;
		return (0);
	}
	std::string input;

	for (int i = 1; i < argc; i++)
	{
		input = argv[i];
		for (int j = 0; j < (int)input.length(); j++)
			std::cout << (char)toupper(input[j]);
	}
	std::cout << std::endl;
	return (0);
}