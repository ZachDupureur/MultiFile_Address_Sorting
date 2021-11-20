//
// Created by Zach on 11/20/2021.
//

#include "struct.h"


void insertAddress(const char last[], const char first[], const char street[], const char city[], const char state[], int zip, struct address* adList[], int i) {
   struct address* temp = malloc(sizeof (struct address));
   strcpy(temp->last, last);
   strcpy(temp->first, first);
   strcpy(temp->street, street);
   strcpy(temp->city, city);
   strcpy(temp->state, state);
   temp->zip = zip;
   adList[i] = temp;
}


