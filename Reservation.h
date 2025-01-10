#pragma once
#include <iostream>
#include "Date.h"
#include "Hotel.h"

class Reservation{
    public:
    Reservation();
    Reservation(Date& date_debut, int nb_nuits, int id_hotel);
    Date date_debut(int day, int month,int year);
    Date date_debut();
    int nb_nuits();
    int id_hotel();
    int id_chambre(); 
    int id_client();
    int prix_total();
    void updateDateDebut(Date date);
    void updateNbNuits(int nb_nuits);
    void setIdHotel(int id2, Hotel hotel);
    int montant_total(Reservation a);

    private:
    Date _date_debut;
    int _nb_nuits;
    int _id_hotel;
    int _id_chambre; 
    int _id_client;
    int _prix_total;
};
