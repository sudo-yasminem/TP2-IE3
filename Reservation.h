#include <iostream>

class Reservation{
    public:
    int date_debut;
    int nb_nuits;
    int id_hotel;
    int id_chambre; //HERTAGE
    int id_client;
    int prix_total;
    int date_debut();
    int nb_nuits();
    int id_hotel();
    int id_chambre(); //HERTAGE
    int id_client();
    int prix_total();

    private:
    int _date_debut;
    int _nb_nuits;
    int _id_hotel;
    int _id_chambre; //HERTAGE
    int _id_client;
    int _prix_total;
}