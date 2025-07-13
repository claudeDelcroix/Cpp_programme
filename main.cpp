#include <iostream>
#include "change_matrice.h"
#include <string>

int main() {
    std::cout<<"Test\n";
    const std::string file_name("C://Users//claude delcroix//CLionProjects//CppProgramme//lab_1//sentences.txt");
    //change_matrice(file_name);
    reduce_space_in_the_file(file_name);
    return 0;
}