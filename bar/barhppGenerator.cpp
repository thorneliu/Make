#include <fstream>

int main(){
    std::ofstream out("bar.hpp");
    if (out.is_open()){
        out << "class bar{\n";
        out << "    public:\n";
        out << "        void run();\n";
        out << "};\n";
        out.close();
    }

    return 0;
}
