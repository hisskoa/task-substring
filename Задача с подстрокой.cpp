#include <iostream>
#include <string>
#include <vector>
// gqtqyw
// wqgqw


int main()
{
    std::string str1 = "gqtqyw", str2 = "wqgqw";
    std::vector<int> counter_letters;
    int k = 0;

    for (int i{ 0 }; i < str1.size(); i++) {
        for (int j{ 0 }; j < str2.size(); j++) {
            if (str1[i] == str2[j]) {
                k++;
            }
        }
        counter_letters.push_back(k);
        k = 0;
    }

    for (int i{ 0 }; i < str1.size(); i++) {
        std::cout << counter_letters[i] << " ";
    }
}

