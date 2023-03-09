#include <iostream>
#include "static/StaticDemo.h"
#include "dynamic/DynamicDemo.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    my_namespace::print("a!");
    my_namespace::print(1);
    return 0;
}
