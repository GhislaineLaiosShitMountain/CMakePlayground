//
// Created by laios on 3/9/2023.
//

#include <string>
#include <iostream>
#include "StaticDemo.h"

using namespace std;

void my_namespace::print(string &&content) {
    cout << content;
}
