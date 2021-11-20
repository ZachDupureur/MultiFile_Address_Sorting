/*
 * Created by Zach Dupureur on 11/19/2021
 *
 *
 */

#ifndef STRUCT_H
#define STRUCT_H


#include <stdlib.h>
#include <stdio.h>

/* ******************************
 * The longest name of a city is
 * Taumatawhakatangihangakoauauotamateaturipukakapikimaungahoronukupokaiwhenuakitanatahu
 * which is a city in New Zeland. It has 85 characters in its name.
 * I think a character array of 85 letters should do for most cities.
 * *****************************/

struct address {
    char first[85];
    char last[85];
    char streetAddress[85];
    char city[85];
    char state[30];
    int zip;
};

#endif /* STRUCT_H*/