#ifndef SCIENTISTREPOSITORY_H
#define SCIENTISTREPOSITORY_H

#include <vector>
#include "Scientist.h"

using namespace std;

class ScientistRepository
{
private:
    vector<Scientist> ScientistVector;
public:
    ScientistRepository();
    void add(Scientist s);
};

#endif // SCIENTISTREPOSITORY_H
