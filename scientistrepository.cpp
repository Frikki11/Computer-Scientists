#include "scientistrepository.h"

ScientistRepository::ScientistRepository()
{
    ScientistVector = vector<Scientist>();
}

void ScientistRepository::add(Scientist s) {
    ScientistVector.push_back(s);
}
