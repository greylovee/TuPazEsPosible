#ifndef FAMILIAR_H
#define FAMILIAR_H
#include "paciente.h"


class Familiar : public paciente
{
    public:
        Familiar();
        void opinion();

    private:
        char nombre [30];
        char opiniones [300];

};

#endif // FAMILIAR_H
