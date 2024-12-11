#include "Reservation.h"
#include "Date.h"
#include <iostream>

int Reservation::date_debut(){
    return _date_debut;
}

int Reservation::nb_nuits(){
    return _nb_nuits;
}

int Reservation::id_hotel(){
    return _id_hotel;
}

int Reservation::id_chambre(){
    return _id_chambre;
}

int Reservation::id_client(){
    return id_client;
}

int Reservation::prix_total(){
    return _prix_total;
}

void Reservation::updateDateDebut(Date date){
    date_debut.day() = date.day();
    date_debut.month() = date.month();
    date_debut.year() = date.year();

}

void Reservation::updateNbNuits(int nb_nuits){
    _nb_nuits = nb_nuits;
}

int Reservation::montant_total(){
    total = nb_nuits*prix_chambre // PRIX CHAMBRE
    return total;
}