#include <iostream>
#include "Date.h"

class Reservation{
    public:
    Date date_debut(int day, int month,int year);
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
    void updateDateDebut(Date date);
    void updateNbNuits(int nb_nuits);
    int montant_total(int montant_total);

    private:
    Date _date_debut;
    int _nb_nuits;
    int _id_hotel;
    int _id_chambre; //HERTAGE
    int _id_client;
    int _prix_total;
}