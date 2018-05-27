#include <iostream>
#include "foo.hpp"
#include "bar/bar.hpp"

int main(){
    std::cout << "Hello world!" << std::endl;
    foo f;
    f.run();
    bar b;
    b.run();
    return 0;
}
