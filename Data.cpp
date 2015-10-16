#include "Data.h"

Data::Data(int gene) {
	this->gene = gene & 0x00ffffff;
}

int Data::operator+(Data parent)
{
	int fatherGene = 0;
	int motherGene = 0;
	fatherGene = this->gene & 0x00fff000;
	motherGene = parent.gene & 0x00000fff;
	return fatherGene | motherGene;
}

int Data::getGene() {
	return gene;
}

void Data::setGene(int gene) {
	this->gene = gene;
}

int Data::getFitness() {
	return fitness;
}

void Data::setFitness(int fitness) {
	this->fitness = fitness;
}

int Data::calculateFitness() {
	//TODO
	return 0;
}