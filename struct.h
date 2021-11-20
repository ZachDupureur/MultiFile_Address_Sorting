/*
 * Created by Zach Dupureur on 11/19/2021
 *
 *
 */

#define _CRT_SECURE_NO_WARNINGS

#ifndef STRUCT_H
#define STRUCT_H


#include <stdlib.h>
#include <stdio.h>
#include <string.h>



/* ******************************
 * The longest name of a city is
 * Taumatawhakatangihangakoauauotamateaturipukakapikimaungahoronukupokaiwhenuakitanatahu
 * which is a city in New Zeland. It has 85 characters in its name.
 * I think a character array of 85 letters should do for most cities.
 * *****************************/

struct address {
    char first[85];
    char last[85];
    char street[85];
    char city[85];
    char state[30];
    int zip;
};

void insertAddress(const char last[], const char first[], const char street[], const char city[], const char state[], int zip, struct address* adList[], int i);
#endif /* STRUCT_H*/