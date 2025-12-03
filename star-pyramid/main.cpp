#include <iostream>

int main() {
    // Create a star pyramid pattern using nested loops
    int height, width;
    std::cout << "Enter the height of the pyramid: ";
    std::cin >> height;
    width = height + (height - 1);
    for(int i = 0; i < height; ++i) {
        for(int j = 1; j <= width; ++j) {
            if(j < height - i || j > height + i) {
                std::cout << " ";
                continue;
            }
            std::cout << "*";
        }
        std::cout << "\n";
    }
    return 0;
}