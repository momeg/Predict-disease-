// 
// Fichier : Attribut.hpp
// Description : Definition de la classe Attribut.
// Auteur : Loic Saos (loic.saos@insa-lyon.fr).
// Date de creation : 30 avril 2018
// Versions :
// - 1.0 : Creation de la classe.
//

#ifndef ATTRIBUT_HPP
#define ATTRIBUT_HPP

#include "TypeAttribut.hpp"
#include "PointeurClonable.hpp"

#include <string>
#include <vector>

using namespace std;

//
// Classe abstraite qui repr�sente un attribut d'une empreinte.
// Un attribut possede un type et une valeur.
// La valeur d�pend du type de l'attribut et se trouve
// donc uniquement dans les classes filles.
//
class Attribut
{
public:
	// Detruit l'attribut.
	virtual ~Attribut();

protected:
	// Construit un attribut.
	Attribut();

public:
	// Donne le type de l'attribut.
	virtual TypeAttribut getType() const = 0;

	// Retourne un clone de l'attribut.
	virtual Attribut* cloner() const = 0;
};

typedef vector<PointeurClonable<Attribut>> ListeAttributs;

#endif // ATTRIBUT_HPP
