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
  int total;
  vector<int> nums;
  vector<int> data;

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

  int N = nums[0];
  int A = nums[1];
  int B = nums[2];
// for (size_t i = 0; i < nums.size(); i++) {
//   std::cout << nums[i] << '\n';
// }
for (size_t i = A; i < B + 1; i++) {
//  std::cout << i << '\n';
    data.push_back(i);
}

for (size_t i = 0; i < data.size(); i++) {
  std::cout << data[i] << '\n';
}
std::cout << "data end" << '\n';

for (int i = 0; i < data.size(); i++) {
  std::cout << "i is  = " << data[i] <<'\n';
  for (int j = 0; j < data.size(); j++) {
    cout << "***j is  = " << data[j] <<'\n';
    int x = data[i];
    int y = data[j];
    //std::cout << x << '\n' << y << endl;
    if (data[i]+ data[j] > N) {
      std::cout << "break" << '\n'
      return 0;
    }
    else{
      total = data[i] + data[j];
      if (total > N) {
        std::cout << "break2" << '\n';
        break;
      }
      else if(total == N){
        std::cout << total << '\n';
      }
      while (total < N) {
        total = total + data[j];
      }

    }
  }
  std::cout << "total"<<total << '\n';
  if (total == N) {
    return 0;
  }

}

// while (total< N) {
//
// }



	return 0;
}
