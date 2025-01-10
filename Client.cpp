#include "Client.h"
#include <algorithm>
#include <vector>
#include <iostream>

Client::Client(){
    _id=0;
    _nom ="Doe";
    _prenom ="John";
}
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
    os << c._id << std::endl << c._prenom << std::endl << c._nom <<std::endl;
    return os;
}

std::string Client::createClient(Client a){
    std::vector <Client> vclients;

    std::cout << "Entrez votre prénom" << std::endl;
    std::cin >> a._prenom;
    std::cout << "Entrez votre nom" << std::endl;
    std::cin >> a._nom;

    for (auto i: vclients){
        //recherche du client a dans vclients
            if (std::find(vclients.begin(),vclients.end(),a) != vclients.end()){
            vclients.push_back(a);
            return "Bienvenue chez nous, M/Mme" + a._prenom + "  " + a._nom;
            }
            else{
                return "Rebonjour, M/Mme" + a._prenom + " " + a._nom;
            }
        
    }

}