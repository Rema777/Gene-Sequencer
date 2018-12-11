#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Gene.h"

using namespace std;

class Chromosome
{

  public:
	Chromosome();

	void AnalyzeGenotype();
	void InputFromFile(ifstream &file, Chromosome &chromosome);
	void OutputToFile(ofstream &file);
	void AddGene(Gene gene);
	Gene FindGene(string name);
	Chromosome operator+(Chromosome); //not done
	bool RunUnitTests();

  private:
	vector<Gene> genes;
};
