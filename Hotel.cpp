#include "Hotel.h"

#include <iostream>

Hotel::Hotel(std::string id, std::string nom, std::string ville, std::vector<Chambre> chambres, int nb_chambres){
    _id = id;
    _nom = nom;
    _ville = ville;
    _chambres = chambres; 

    for(int i=0; i<nb_chambres; i++){
        chambres.push_back(chambres[i]);

    }
}


std::string Hotel::id(){
    return _id;
}

std::string Hotel::nom(){
    return _nom;
}

std::string Hotel::ville(){
    return _ville;
}

std::vector<Chambre> Hotel::chambres(){
    return _chambres;
}

int Hotel::nb_chambres(){
    return _nb_chambres;
}

void Hotel::ajouteChambre(std::vector<Chambre> chambres,int nb_chambres){
    for(int i=0; i < nb_chambres; i++){
        chambres.push_back(chambres[i]);

    }

}