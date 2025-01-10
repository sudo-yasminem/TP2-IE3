#pragma once
#include <iostream>
#include <vector>
#include "Chambre.h"


class Hotel{
    public:
    Hotel();
    Hotel(int id, std::string nom, std::string ville,int nb_chambres);
    int id();
    std::string nom();
    std::string ville();
    std::vector<Chambre> chambres();
    int nb_chambres();
    void SetId(int id2);
    std::vector<Chambre> initHotel(Hotel a);
    void ajouteChambre(std::string type, int nb_chambres, int prix);
   

    private:
    int  _id;
    std::string _nom;
    std::string _ville;
    std::vector<Chambre> _chambres;
    int _nb_chambres;
};

