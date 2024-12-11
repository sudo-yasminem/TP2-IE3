#include "Hotel.h"
#include "Chambre.h"
#include <iostream>

Hotel::Hotel(std::string id, std::string nom, std::string ville, std::vector<Chambre> chambres, int nb_chambres){
    _id = id;
    _nom = nom;
    _ville = ville;
    _chambres = chambres; 

    for(int i=0; i<nb_chambres; i++){
        chambres.pushback(chambres[i]);

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

std::string Hotel::tab(){
    return _tab;
}

int Hotel::nb_chambres(){
    return _nb_chambres;
}

void Hotel::ajouteChambre(std::vector<Chambre> chambres,int nb_chambres){
    for(int i=0; i<nb_chambres; i++){
        chambres.pushback(chambres[i]);

    }

}