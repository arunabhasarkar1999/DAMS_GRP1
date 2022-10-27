#ifndef DOCT_H
#define DOCT_H

typedef struct docnode
{
    int serial;
    char name[100];
    char phone[12];
    char designation[100];
    struct docnode *next;
}docnode;

void addDoc(docnode *);
void updateDoc(docnode *);
void viewDoc(docnode *);



#endif
