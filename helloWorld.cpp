#include <iostream>
#include "foo.hpp"

int main(){
    std::cout << "Hello world!" << std::endl;
    foo f;
    f.run();
    return 0;
}
