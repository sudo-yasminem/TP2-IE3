#include "Hotel.h"
#include "Chambre.h"
#include <iostream>

Hotel::Hotel(std::string id, std::string nom, std::string ville, Chambre tab[]){
    _id = id;
    _nom = nom;
    _ville = ville;
    _tab = tab; 
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

void Hotel::supprimeChambre(int numero_chambre){
    

}

void Hotel::ajouteChambre(int numero_chambre){

    
}