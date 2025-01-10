#include "Hotel.h"
#include <iostream>
#include <vector>

Hotel::Hotel(int id, std::string nom, std::string ville, std::vector<Chambre> chambres, int nb_chambres){
    _id = id;
    _nom = nom;
    _ville = ville;
    _chambres = chambres;
    _nb_chambres = nb_chambres;
}

Hotel::Hotel(){
    _id = 0;
    _nom ="vide";
    _ville = "vide";
    _nb_chambres =0;
}

int Hotel::id(){
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

void Hotel::SetId(int id2){
    _id = id2;
}

void Hotel::ajouteChambre(std::string type, int nb_chambres, int prix){
    for(int i=0; i < nb_chambres; i++){
        _chambres.push_back(Chambre(i+1,type,prix));
        nb_chambres++;

    }
}



