#include <iostream>

class Chambre {
    public:
    Chambre(int numero_chambre, std::string type, int prix_chambre);
    int numero_chambre();
    int prix_chambre();
    std::string type();
    void updatePrixChambre(int prix_chambre);
    friend std::ostream& operator << (std::ostream& os, Chambre c);

    private:
    int _numero_chambre;
    std::string _type;
    int _prix_chambre;

};