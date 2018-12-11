#pragma once
#include <iostream>
#include <string>
#include "Chromosome.h"

using namespace std;

class GeneSequencer
{

  public:
	Chromosome CreateChromosomePair();
	Chromosome ImportChromosomePair(const string &fileName = "");
	Chromosome DoMeiosis(Chromosome x, Chromosome y);

	void ExportChromosome(Chromosome c, const string &fileName = "");
	void SequenceChromosomePair(Chromosome c);
	bool PowerOnSelfTest();

  private:
	//idk what goes here
};