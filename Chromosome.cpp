#include "Chromosome.h"
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

Chromosome::Chromosome()
{
}

void Chromosome::AnalyzeGenotype()
{
	for (int i = 0; i < genes.size(); i++)
	{
		cout << "Gene " << i + 1 << endl;
		cout << "  Name: " << genes[i].getName() << endl;
		cout << "  Genetic trait: " << genes[i].getType() << endl;

		Allele allele1 = genes[i].getAlleleA();
		Allele allele2 = genes[i].getAlleleB();

		if (allele1.getType() == "dominant")
		{
			cout << "  Expressed allele: " << allele1.getName() << "-" << allele1.getType() << endl;
			cout << "  Nucleotide sequence: " << allele1.getSequence() << endl;
		}
		else
		{
			cout << "  Expressed allele: " << allele2.getName() << "-" << allele2.getType() << endl;
			cout << "  Nucleotide sequence: " << allele2.getSequence() << endl;
		}

		cout << endl;
	}

	cout << endl;
}

void Chromosome::InputFromFile(ifstream &file, Chromosome &chromosome)
{
	string line;

	while (getline(file, line))
	{
		stringstream ss(line);
		vector<string> result;

		while (ss.good())
		{
			string substr;
			getline(ss, substr, ',');
			result.push_back(substr);
		}

		Allele allele1 = Allele(result[2], result[3], result[4]);
		Allele allele2 = Allele(result[5], result[6], result[7]);
		Gene gene = Gene(result[0], result[1], allele1, allele2);
		chromosome.AddGene(gene);
	}
}

void Chromosome::OutputToFile(ofstream &file)
{
	for (int i = 0; i < genes.size(); i++)
	{
		Allele allele1 = genes[i].getAlleleA();
		Allele allele2 = genes[i].getAlleleB();

		file << genes[i].getName() << "," << genes[i].getType() << "," << allele1.getName() << "," << allele1.getType() << "," << allele1.getSequence() << "," << allele2.getName() << "," << allele2.getType() << "," << allele2.getSequence() << "\n";
	}
}

void Chromosome::AddGene(Gene gene)
{
	genes.push_back(gene);
}

Gene Chromosome::FindGene(string name)
{
	for (int i = 0; i < genes.size(); i++)
	{
		if (genes[i].getName() == name)
		{
			return genes[i];
		}
	}
}
