#ifndef RECEP_H
#define RECEP_H


typedef struct recepnode
{
    int serial;
    char name[100];
    char phone[12];
    struct recepnode *next;
}recepnode;

void addRecep(recepnode *);
void updateRecep(recepnode *);
void viewRecep(recepnode *);
void Rwrite(recepnode *);


#endif
