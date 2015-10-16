#ifndef _POPULATION_
#define _POPULATION_

#include "Data.h"

class Population {
private:
	Data genePool[45];
	int popMax = 45;
public:
	Data operator[](size_t ndx);

};

#endif
