#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> arr{ 1,1,2,5,6,1,2,4 };

    std::cout << "[IN]:\t";
    for (auto i = arr.begin(); i < arr.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    std::sort(arr.begin(), arr.end());
    auto inter = std::unique(arr.begin(), arr.end());
    arr.erase(inter, arr.end());

    std::cout << "[OUT]:\t";
    for (auto i = arr.begin(); i < arr.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << std::endl;
}