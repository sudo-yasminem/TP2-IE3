#include "Client.h"

#include <iostream>


Client::Client(int id, std::string nom, std::string prenom){
    _id= id;
    _nom= nom;
    _prenom= prenom;
}

int Client::id(){
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

std::ostream& operator << (std::ostream& os, Client c){
    os << c._id << "  " << c._prenom << "  " << c._nom;
    return os;
}