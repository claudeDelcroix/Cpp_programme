//
// Created by claude delcroix on 12/07/2025.
//

#ifndef LAB_1_CHANGE_MATRICE_H
#define LAB_1_CHANGE_MATRICE_H
#include <string>
#include <vector>

void change_matrice(const std::string& name_file);
void print_array(const std::vector<std::vector<int>>& array_vec);
void modifie_matrice(const std::string& file_name,const std::vector<std::vector<int>>& matrice);
int get_size(const std::string& name_file);
std::vector<std::vector<int>> get_matrix_from_file(const std::string& name_file);
void reduce_space_in_the_file(const std::string& file_name);
#endif //LAB_1_CHANGE_MATRICE_H
