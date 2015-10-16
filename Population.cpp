#include "Population.h"

Data Population::operator[](size_t ndx) {
	return genePool[ndx];
}