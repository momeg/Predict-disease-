#ifndef MODELE_HPP
#define MODELE_HPP

#include "Resultat.hpp"
#include "CatalogueEmpreintes.hpp"
#include "CatalogueMaladies.hpp"
#include <set>
#include <vector>

class Modele
{
public:
	virtual ~Modele();

protected:
	Modele();

public:
	// Analyse une empreinte, determine ses eventuelles
	// maladies et retourne le resultat du diagnostic.
	// Parametres :
	// - maladiesReference : catalogue de maladies de reference.
	// - reference : catalogue des empreintes de reference.
	// - aTraiter : empreinte a analyser.
	virtual Resultat analyserEmpreinte(const CatalogueMaladies& maladiesReference, const CatalogueEmpreintes& reference, const Empreinte& aTraiter) = 0;

public:
	vector<Resultat> analyserEmpreintes(const CatalogueMaladies& maladiesReference, const CatalogueEmpreintes& reference, CatalogueEmpreintes& aTraiter);

	double calculerPrecision(const CatalogueEmpreintes& labeled, const vector<Resultat>& resultats);
};

#endif // MODELE_HPP
