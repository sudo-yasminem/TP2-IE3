#include "Reservation.h"
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