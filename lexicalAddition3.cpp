#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void tokenize(std::string const &str, const char* delim,
			std::vector<std::string> &out)
{
	char *token = strtok(const_cast<char*>(str.c_str()), delim);
	while (token != nullptr)
	{
		out.push_back(std::string(token));
		token = strtok(nullptr, delim);
	}
}

int main()
{
  string str;
  vector<int> nums;

  getline (cin, str);
	std::string s = str;
	const char* delim = " ";

	std::vector<std::string> out;
	tokenize(s, delim, out);

	for (auto &s: out) {
    int x = stoi(s);
    //cout << s << '\n';

		//std::cout << s << '\n';
    nums.push_back(x);
	}
for (size_t i = 0; i < nums.size(); i++) {
  std::cout << nums[i] << '\n';
}




	return 0;
}
