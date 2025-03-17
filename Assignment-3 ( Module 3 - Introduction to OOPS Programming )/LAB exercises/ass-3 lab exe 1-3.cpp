// 3. POP vs. OOP Comparison Program ....

//Procedural Programming (POP) Approach :


//#include <iostream>
//
//int main() {
//    double length, width, area;
//    
//    std::cout << "Enter length of the rectangle: ";
//    std::cin >> length;
//    
//    std::cout << "Enter width of the rectangle: ";
//    std::cin >> width;
//    
//    area = length * width;
//    
//    std::cout << "Area of the rectangle: " << area << std::endl;
//    
//    return 0;
//}


//Object-Oriented Programming (OOP) Approach : 

#include <iostream>

class Rectangle {
private:
    double length, width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    double getArea() {
        return length * width;
    }
};

int main() {
    Rectangle rect;
    double length, width;

    std::cout << "Enter length of the rectangle: ";
    std::cin >> length;
    
    std::cout << "Enter width of the rectangle: ";
    std::cin >> width;
    
    rect.setDimensions(length, width);

    std::cout << "Area of the rectangle: " << rect.getArea() << std::endl;

    return 0;
}

