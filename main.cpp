#include "header.h"

int main(){
    int x = 0, _area_ = 0;
    std::cout << "Select a shape:\n1. Circle\n2. Rectangle\n3. Triangle\n4. Square\n"; std::cin >> x;

    if (x == 1){
        double radius = 0;
        std::cout << "Enter radius: "; std::cin >> radius;
        _area_ = area(radius);
    }
    
    else if (x == 2){
        double width = 0, height = 0;
        std::cout << "Enter width: "; std::cin >> width;
        std::cout << "Enter height: "; std::cin >> height;
        _area_ = area(width, height, 'r');
    }

    else if (x == 3){
        double width = 0, height = 0;
        std::cout << "Enter width: "; std::cin >> width;
        std::cout << "Enter height: "; std::cin >> height;
        _area_ = area(width, height);
    }

    else if (x == 4){
        int side = 0;
        std::cout << "Enter side"; std::cin >> side;
        _area_ = area(side);
    }

    
    std::cout << _area_ << std::endl;
    return 0;
}