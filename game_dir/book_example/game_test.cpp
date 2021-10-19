#include <iostream>


int main()
{
	std::string word1 = "Game";
	std::string word2("Over");
	std::string word3(3,'!');
	std::string phrase = word1 + " " + word2 + word3;
	std::cout << "The phrase is: " << phrase << "\n\n";
	std::cout << "The phrase has " << phrase.size() << " characters in it.\n\n";

	for (int i = 0; i < phrase.size(); i++)
		std::cout << "Character at position " << i << " is: " << phrase[i] << std::endl;

	std::cout << "\nThe sequence 'Over' begins at location ";
	std::cout << phrase.find("Over") << std::endl;
	return 0;
}
