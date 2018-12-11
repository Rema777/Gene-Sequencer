#include <iostream>
#include <string>
#include "Allele.h"

using namespace std;

Allele::Allele()
{
}

Allele::Allele(string name, string type, string sequence)
{
	setName(name);
	setType(type);
	setSequence(sequence);
}

void Allele::setName(string name)
{
	variantName = name;
}

void Allele::setType(string type)
{
	variantType = type;
}

void Allele::setSequence(string sequence)
{
	nucleotideSequence = sequence;
}

string Allele::getName()
{
	return variantName;
}

string Allele::getType()
{
	return variantType;
}

string Allele::getSequence()
{
	return nucleotideSequence;
}
