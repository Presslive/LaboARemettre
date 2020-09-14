// But:  Determiner si un entier est pair ou impair
//Auteur: Diallo Abdoulaye
//Date:  2020-09-11



#include<iostream>

int main()
{
	setlocale(LC_ALL, "");
	
	
	int a;         //Variable entier (int) nomm�e (a)

	

	std::cout << "Entrez un nombre pour savoir s'il est pair ou impair :";  
				     //L'utilisateur voit cette question			
				

	std::cin >> a;  //L'utilisateur rentre un nombre 	

	
	if ((a % 2) == 0)  //Formule: Si le nombre rentr� est modulo de 2 
						//Repond le nombre rentr� est pair

	{
		std::cout << a << " est un nombre pair.";     //
	}
	else				//Sinon repond le nombre rentr� est impair

	{
		std::cout << a << " est un nombre impair.";
	}


	
	

	/*   Plan Tests                                      
	

	     Nombre entr�e									R�sultat attendue


		     10                                        10 est un nombre pair
			
			 413									   413 est un nombre impair

			 0                                         0 est un nombre pair

			 1										   1 un nombre impair
	
			-36										-36 est un nombre pair

			-1452397								-1452397 est un nombre impair
	
	*/




}