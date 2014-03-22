#include <iostream>
#include <vector> //Inclue le Vector et les fonctions associees.
#include <cstdlib>

using namespace std;

void addNote() //Créé une fonction qui ne retourne aucune valeur, elle fait juste des actions.
{
	int size; //Un int qui représente le nombre de notes.
	char choice; //Une lettre (character, ou char) qui représente le choix de l'utilisateur.
	double moyenne(0); //Un double (plus grand qu'un int) qui represente la moyenne. On l'initialise à 0.

	cout << "\nCombien de notes avez-vous ?" << endl << "Marquez le nombre de notes que vous avez : "; //Remarquez le endl, qui a le même effet que \n.
	cin >> size;
	cout << "\nVous avez bien " << size << " notes ? Marquez Y en majuscule pour oui, une autre lette pour non : ";
	cin >> choice;

	if (choice == 'Y') //Si choice est égal à Y.
	{
		size - 1; //Comme un tableau commence par zéro et non par un, on enlàve 1 à la taille.
		vector<double> notes; //Créé un nouveau tableau sans limite fixée initialement.

		cout << "\nOK ! Maintenant marquez vos notes : ";

		for (int i(0); i < size; ++i) //Si i est plus petit que la taille du tableau, alors on répète les actions jusqu'à ce que i atteigne size.
		{
			double note;

			cout << "\nSuivante : ";
			cin >> note;

			notes.push_back(note); //Ajoute une place dans le tableau des notes et ajoute le contenu de la variable note dans cette place. Comme les actions sont répétées, après cela note revient à 0, et on réattribut une valeur.
		}

		cout << "\nCalcul ...\n\n";

		for (int i(0); i < size; ++i)
		{
			moyenne += notes[i]; //Additionne toutes les notes.
		}

		moyenne /= notes.size(); //Divise par le nombre de notes.

		cout << "Votre moyenne est de " << moyenne << " !" << endl << "\n17 ou plus ? Excellent ! Mention d'excellence !" << endl << "15 ? Gg, continue comme ca ! Felicitations !" << endl << "12 ? Il faut t'ameliorer pour reussir !" << endl << "8 ? Vite !!! Remonte !!!" << endl << "Moins de 8 ? Mais que fais-tu ? Apprend et tu reussira !" << endl << "\n";
	}
	else
	{
	}
}

int main()
{
	cout << "Bonjour et bienvenue dans la calculatrice de moyenne de MrGantz02 !" << endl;
	addNote(); //Démarre la fonction addNote().

	system("PAUSE");
	return 0;
}
