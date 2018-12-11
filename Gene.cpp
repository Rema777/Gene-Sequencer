#include <iostream>
#include <string>
#include "Gene.h"

using namespace std;

Gene::Gene()
{
}

Gene::Gene(string name, string type, Allele allele1, Allele allele2)
{
	setName(name);
	setType(type);
	setAlleleA(allele1);
	setAlleleB(allele2);
}

void Gene::setName(string name)
{
	geneName = name;
}

void Gene::setType(string type)
{
	geneTraitType = type;
}

void Gene::setAlleleA(Allele allele1)
{
	alleleA = allele1;
}

void Gene::setAlleleB(Allele allele2)
{
	alleleB = allele2;
}

string Gene::getName()
{
	return geneName;
}

string Gene::getType()
{
	return geneTraitType;
}

Allele Gene::getAlleleB()
{
	return alleleB;
}

Allele Gene::getAlleleA()
{
	return alleleA;
}
