#include "Chambre.h"
#include <iostream>

Chambre::Chambre(int numero_chambre, std::string type, int prix_chambre){
    _numero_chambre = numero_chambre;
    _type = type;   
    _prix_chambre = prix_chambre;
}

int Chambre::numero_chambre(){
    return _numero_chambre;
}

int Chambre::prix_chambre(){
    return _prix_chambre;
}

std::string Chambre::type(){
    return _type;
}

void Chambre::updatePrixChambre(int prix_chambre){
    _prix_chambre = prix_chambre;
}

std::ostream& operator << (std::ostream& os, Chambre c){
    os << c._numero_chambre << "  " << c._type << "  " << c._prix_chambre;
    return os;
}