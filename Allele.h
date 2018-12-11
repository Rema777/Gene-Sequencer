#pragma once
#include <iostream>
#include <string>

using namespace std;

class Allele
{

  public:
	Allele();
	Allele(string name, string type, string sequence); //creates Allele

	void setName(string name);
	void setType(string type);
	void setSequence(string sequence);
	string getName();
	string getType();
	string getSequence();

  private:
	string variantName;
	string variantType;
	string nucleotideSequence;
};