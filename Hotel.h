#include <iostream>
#include <vector>
#include "Chambre.h"

class Hotel{
    public:
    std::string id();
    std::string nom();
    std::string ville();
    std::vector<Chambre> chambres();
    int nb_chambres();
    void ajouteChambre(std::string type, int nb_chambres, int prix);
    Hotel(std::string id, std::string nom, std::string ville, std::vector<Chambre> chambres, int nb_chambres);

    private:
    std::string _id;
    std::string _nom;
    std::string _ville;
    std::vector<Chambre> _chambres;
    int _nb_chambres;
};