#ifndef SCIENTIST_H
#define SCIENTIST_H

#include<QDate>

class Scientist
{
public:
    std::string name;
    std::string gender;
    QDate dateOfBirth;
    QDate dateOfDeath;
    bool alive;
    Scientist();
};

#endif // SCIENTIST_H
