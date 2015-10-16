#ifndef _DATA_
#define _DATA_

class Data {
private:
	int gene;
	int fitness;
	int calculateFitness();
public:
	Data(int gene);
	int operator+(Data parent);
	int getGene();
	void setGene(int gene);
	int getFitness();
	void setFitness(int fitness);
};

#endif
