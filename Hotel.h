#include <iostream>
#include "Chambre.h"

class Hotel: public Chambre{
    public:
    /*std::string id;
    std::string nom;
    std::string ville;
    Chambre tab[];*/
    std::string id();
    std::string nom();
    std::string ville();
    Chambre tab();
    void supprimeChambre(int numero_chambre); // HeritageChambre?
    void ajouteChambre(int numero_chambre);

    private:
    std::string _id;
    std::string _nom;
    std::string _ville;
    Chambre _tab[];
    
};