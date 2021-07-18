#include <algorithm>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <fstream>

#include <readline/history.h>
#include <readline/readline.h>
using namespace std;
//std::vector<std::string> vocabulory{"mTELE2", "mEKATERINBURG", "mBEELINE", "mSPITERBURG"};

    /*ifstream inFile("provaders.csv", ios::in);
    string lineStr;
    vector<vector<string>> strArray;
    while (getline(inFile, lineStr))
    {
                 // print the entire line of string
        cout << lineStr << endl;
                 // Save as a two-dimensional table structure
        stringstream ss(lineStr);
        string str;
        vector<string> lineArray;
                 // separated by comma
        while (getline(ss, str, ','))
            lineArray.push_back(str);
        strArray.push_back(lineArray);
    }*/

char *command_generator(const char *text, int state) {
  static std::vector<std::string> matches;
  static size_t match_index = 0;

  if (state == 0) {
    matches.clear();
    match_index = 0;

    std::string textstr(text);
    for (auto word : strArray) {
      if (word.size() >= textstr.size() &&
          word.compare(0, textstr.size(), textstr) == 0) {
        matches.push_back(word);
      }
    }
  }

  if (match_index >= matches.size()) {
    return nullptr;
  } else {
    return strdup(matches[match_index++].c_str());
  }
}

char **command_completion(const char *text, int start, int end) {
  rl_attempted_completion_over = 1;
  return rl_completion_matches(text, command_generator);
}

int main(int argc, char **argv) {
  if (argc > 1 && std::string(argv[1]) == "-d") {
    rl_bind_key('\t', rl_insert);
  }
  rl_attempted_completion_function = command_completion;

  char *buf;
  std::string cmd;

  while ((buf = readline("> ")) != nullptr) {
    cmd = std::string(buf);
    if (cmd.size() > 0) {
      add_history(buf);
    }
    free(buf);
    std::stringstream scmd(cmd);
    scmd >> cmd;

    std::vector<std::string>::iterator itr =
        std::find(strArray.begin(), strArray.end(), cmd);
    if (itr != strArray.end()) {
      std::cout << cmd << ": " << std::distance(strArray.begin(), itr)
                << std::endl;
    } else {
      std::cout << "Invalid number name" << std::endl;
    }
  }

  std::cout << std::endl;
  return 0;
}
