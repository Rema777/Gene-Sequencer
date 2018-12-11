#pragma once
#include <iostream>
#include <string>
#include "Allele.h"

using namespace std;

class Gene
{

  public:
	Gene();
	Gene(string name, string type, Allele allele1, Allele allele2);

	void setName(string name);
	void setType(string type);
	void setAlleleA(Allele allele1);
	void setAlleleB(Allele allele2);
	string getName();
	string getType();
	Allele getAlleleA();
	Allele getAlleleB();

  private:
	string geneName;
	string geneTraitType;
	Allele alleleA;
	Allele alleleB;
};