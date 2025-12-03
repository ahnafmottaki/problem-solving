
#include <iostream>

int main() {
   int height, width;
   std::cout << "Please enter the height: ";
   std::cin >> height;
   width = height + (height - 1);
   for(int i = 0; i < height; ++i ) {
       for(int j = 0; j < width; ++j) {
           if(j < i || j > width - (i+1) ) {
               std::cout << " ";
           } else {
               std::cout << "*";
           }
       }
       std::cout << "\n";
   }
    return 0;
}
