//
// Created by claude delcroix on 12/07/2025.
//

#include "change_matrice.h"
#include <iostream>
#include <fstream>
#include <vector>

void print_array(const std::vector<std::vector<int>>& array_vec){
    for(int i = 0;i < array_vec[0].size();i++){
        for(int j = 0; j < array_vec[0].size();j++){
            std::cout<<array_vec[i][j]<<" ";
        }
        std::cout<<std::endl;
    }
}

void modifie_matrice(const std::string& file_name,const std::vector<std::vector<int>>& matrice){
    std::ofstream file("C://Users//claude delcroix//CLionProjects//CppProgramme//lab_1//matrix.txt");
    if(!file){
        perror("Opening failed\n");
        exit(EXIT_FAILURE);
    }
    file << matrice[0].size()<<std::endl;
    for(int i = 0; i < matrice[0].size();i++){
        std::vector<int> ligne;
        for(int j = 0;j < matrice[0].size();j++){
            file << matrice[j][i]<<" ";
        }
        file<<std::endl;
    }
}

std::vector<std::vector<int>> get_matrix_from_file(const std::string& name_file){
    std::ifstream file(name_file);
    if(!file){
        perror("Opening failed \n");
        exit(EXIT_FAILURE);
    }
    std::vector<std::vector<int>> matrice;
    int size_matrice = 0;
    if (file >> size_matrice) {
        for (int i = 0; i < size_matrice; i++) {
            std::vector<int> ligne;
            for (int j = 0; j < size_matrice; j++) {
                int valeur;
                if (file >> valeur) {
                    ligne.push_back(valeur);
                }
            }
            matrice.push_back(ligne);
        }
    }
    file.close();
    return matrice;
}

int get_size(const std::string& name_file){
    std::ifstream file(name_file);
    if(!file){
        perror("Opening failed \n");
        exit(EXIT_FAILURE);
    }
    int size_matrice = 0;
    file >> size_matrice;
    file.close();
    return size_matrice;
}

 void change_matrice(const std::string& name_file){
    int size_matrice = get_size(name_file);
    std::vector<std::vector<int>> matrice(size_matrice,std::vector<int>(size_matrice)) ;
     matrice = get_matrix_from_file(name_file);
     std::cout<<"le fichier d'entree est de la forme suivante : \n";
     print_array(matrice);
     modifie_matrice(name_file,matrice);
     std::vector<std::vector<int>> new_matrice(size_matrice,std::vector<int>(size_matrice));
     new_matrice = get_matrix_from_file(name_file);
     std::cout<<"le fichier de sortie est de la forme suivante : \n";
     print_array(new_matrice);
}
