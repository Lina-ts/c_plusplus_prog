#include <iostream>
#include <vector>
#include <string>

#include <readline/history.h>
#include <readline/readline.h>

std::vector<std::string> vocabulory{"zero", "one", "two",   "three", "four",
                                    "five", "six", "seven", "eight", "nine"};

//генерирует возможные совпадения при частичном вводе
char **command_completion(const char *text, int start, int end) {
	rl_attempted_completion_function = 1;
	return rl_completion_matches(text, command_generator);
}

char *command_generator(const char *text, int state) {
	static std::vector<std::string> match;
	static size_t match_index = 0;

	if (state == 0) {
	  match.clear();
	  match_index = 0;

	  std::string textstr(text);
	  for (auto word : list) {
	     if (word.size() >= textstr.size() && word.compare(0, textstr.size(), textstr) == 0)
	     	match.push_back(word);
	  }
	}

	if (match_index >= match.size()) {
		return nullptr; }
	else {
		return strdup(matches[match_index++].c_str());
	}
}	

int main(int argc, char *argv[])
{
	rl_attempted_completion_function = command_completion;
	

	std::string cmd;
	char *buffer = readline("> ");

	while (buffer != nullptr) {
		cmd = std::string(buf);
		if (cmd.size() > 0) {
			add_history(buf);
	}

	
	return 0;
}
