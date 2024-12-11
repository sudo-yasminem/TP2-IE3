#include "Client.h"
#include <iostream>

std::string Client::id(){
    return _id;
}

std::string Client::nom(){
    return _nom;
}

std::string Client::prenom(){
    return _prenom;
}

void Client::updateNom(std::string nom){
    _nom = nom;
}

void Client::updatePrenom(std::string prenom){
    _prenom = prenom;
}