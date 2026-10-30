#include <iostream>
#include <vector>

int main() {
    int n, s;
    std::vector<int> numbers;

    std::cout << "please enter n:" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        std::cout << "please enter a number:" << std::endl;
        std::cin >> x;
        numbers.push_back(x);
    }

    std::cout << "please enter s:" << std::endl;
    std::cin >> s;
    std::vector<int> occurence_pos;

    int count = 0;
    
    for (int i = 0; i < n; i++) {
        if (numbers[i] == s) {
            occurence_pos.push_back(i);
            count++;
        }
    }

    std::cout << "there are " << count << " occurrences of " << s << std::endl;
    
    for (int i = 0; i < s; i++) {
        std::cout << occurence_pos[i] << std::endl;
    }
}