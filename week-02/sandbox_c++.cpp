#include <unordered_map>
#include <iostream>
#include <vector>

int main()
{

    std::unordered_map<int, int> dic;

    dic[8] = 1;
    dic[1] = 2;
    dic[3] = 4;

    for (auto num : dic)
    {
        std::cout << "first: " << num.first << std::endl << "second: " << num.second <<  std::endl << std::endl;
    }

    return 0;
}