#include <iostream>
#include <string>
#include "GeneSequencer.h"

Chromosome GeneSequencer::CreateChromosomePair()
{
	return Chromosome();
}

Chromosome GeneSequencer::ImportChromosomePair(const string &fileName)
{
	return Chromosome();
}

Chromosome GeneSequencer::DoMeiosis(Chromosome x, Chromosome y)
{
	return Chromosome();
}

void GeneSequencer::ExportChromosome(Chromosome c, const string &fileName)
{
}

void GeneSequencer::SequenceChromosomePair(Chromosome c)
{
}

bool GeneSequencer::PowerOnSelfTest()
{
	return false;
}
