#include <iostream>
#include <fstream>
#include <string>
#include "Allele.h"
#include "Gene.h"
#include "Chromosome.h"

using namespace std;

void menu();

int main()
{

	int answer = 1;
	Chromosome chromosome;

	string filepath = "C:/Users/KALE/Desktop/Test.txt";

	while (answer > 0 && answer < 6)
	{
		menu();

		cin >> answer;

		if (answer == 1)
		{

			string answer2 = "y";

			while (answer2 == "y")
			{
				string geneName;
				string geneTrait;
				string alleleAVariant;
				string alleleAType;
				string alleleASeq;
				string alleleBVariant;
				string alleleBType;
				string alleleBSeq;

				cout << "What is the name of the new gene?" << endl;
				cin >> geneName;
				cout << "What is the gene trait?" << endl;
				cin >> geneTrait;
				cout << "What is the allele 1 variant?" << endl;
				cin >> alleleAVariant;
				cout << "What is the allele 1 type?" << endl;
				cin >> alleleAType;
				cout << "What is the allele 1 sequence?" << endl;
				cin >> alleleASeq;

				Allele allele1 = Allele(alleleAVariant, alleleAType, alleleASeq);

				cout << "What is the allele 2 variant?" << endl;
				cin >> alleleBVariant;
				cout << "What is the allele 2 type?" << endl;
				cin >> alleleBType;
				cout << "What is the allele 2 sequence?" << endl;
				cin >> alleleBSeq;

				Allele allele2 = Allele(alleleBVariant, alleleBType, alleleBSeq);
				Gene gene = Gene(geneName, geneTrait, allele1, allele2);
				chromosome.AddGene(gene);

				cout << "Would you like to add a new gene? (y/n)";
				cin >> answer2;
			}

		}
		else if (answer == 2)
		{
			chromosome.AnalyzeGenotype();
		}
		else if (answer == 3)
		{
			ofstream file;
			file.open(filepath);
			chromosome.OutputToFile(file);
			file.close();
		}
		else if (answer == 4)
		{
			ifstream file;
			file.open(filepath);
			chromosome.InputFromFile(file, chromosome);
			file.close();
		}
		else if (answer == 5)
		{

		}
		else
		{

		}
	}


	system("pause");
	return 0;
}

void menu()
{
	cout << "1-Create chromosome" << endl;
	cout << "2-Analyze chromosome" << endl;
	cout << "3-Output chromosome to file" << endl;
	cout << "4-Input chromosome from file" << endl;
	cout << "5-Combine chromosomes" << endl;
	cout << "6-Exit" << endl;
}
