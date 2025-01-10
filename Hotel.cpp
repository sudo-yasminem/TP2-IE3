
#include "Hotel.h"
#include <iostream>
#include <vector>

Hotel::Hotel(int id, std::string nom, std::string ville, int nb_chambres){
    _id = id;
    _nom = nom;
    _ville = ville;
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

std::vector<Chambre> Hotel::initHotel(Hotel a){
    std::vector<Chambre> tmp;
    tmp=a.chambres();
    for(int i=1; i<4; i++){
        Chambre c(i,"Single",100);
        tmp.push_back(c);
        //std::cout<<c; 
    }



    for(int i=4; i<=8; i++){
        Chambre c(i,"Double",125);
        tmp.push_back(c);
        //std::cout<<c;
    }  

    for(int i=8; i<10; i++){
        Chambre c(i,"Suite",210);
        tmp.push_back(c);
        //std::cout<<c;
    } 

    return tmp;

}


