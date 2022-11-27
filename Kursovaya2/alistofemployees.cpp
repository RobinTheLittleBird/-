#include "alistofemployees.h"

AListOfEmployees::AListOfEmployees() {
    int n = 4;
    size = n;
    inf = (AListOfEmployees*)calloc(size, sizeof(AListOfEmployees));
    for (int i = 0; i < size; i++) {
        int f = 0;
    }
}

AListOfEmployees::~AListOfEmployees() {
    free(inf);
}
