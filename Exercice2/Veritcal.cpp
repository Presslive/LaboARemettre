//But:  Creer un prgramme qui tient en compte seulement 5 chiffres et qui les mets en verticale
//Auteur: Diallo Abdoulaye	
//Date:2020-09-11




#include<iostream>

using namespace std;

 



int main()
{
	setlocale(LC_ALL, "");                              //Pour les charactères accentuées


	int a,chiffre1=0,chiffre2=0,chiffre3=0,chiffre4=0,chiffre5=0;       //Les variables utilsés pour ce programme


	
	

	std::cout << "Entrez un nombre à cinq chiffres :";                //Ce que voit l'utilisateur voit  en premier lieu

	std::cin >> a;                                                   //Il repond à la question en rentrant les 5 chiffres

				if (a < 10000 || a > 99999)                             //Condition:   Si a(le nombre rentré)  est plus  petit que 10000 ou plus grand que 
																		
	{
		std::cout<<"Ce nombre ne contient pas 5 chiffres. ";              // 99999, l'utilisateur voit sa et ne peut pas voir le résultat
	}
	
	
				else												    //Par contre si a(le nombre rentré) est compris entre 10000 et 99999 
																		//L'utilisateur peut voir le résultat
				
	{

		chiffre1 = a / 10000;											// Les chiffres répresente chacun un calcul et affiche le resultat ainsi de suite
																	
			std::cout << chiffre1 << std::endl;								//Pour chiffre1,c'est (a) diviser par 10000



		chiffre2 = ((a / 1000) % 10);                                   //Pour chiffre2, c'est (a) diviser par 1000 et  modulo de 10

			std::cout << chiffre2 << std::endl;



		chiffre3 = ((a / 100) % 10);								//Pour chiffre3, c'est (a) diviser par 100 et  modulo de 10

			std::cout << chiffre3 << std::endl;



		chiffre4 = ((a / 10) % 10);									//Pour chiffre4, c'est (a) diviser par 10 et  modulo de 10

			std::cout << chiffre4 << std::endl;



		chiffre5 = (a % 10);                                       ////Pour chiffre5, c'est (a) modulo de 10

			std::cout << chiffre5 << std::endl;



      }


}
	
	
	/*
			Plan test			
				
								Nombre entrée											Résutat attendue
		
	
								45678													45678(VERTICALEMENT)
	
	
								13														Ce nombre ne contient pas 5 chiffres
	

								576698344444												Ce nombre ne contient pas 5 chiffres

								1.435336346												Ce nombre ne contient pas 5 chiffres	

								
																						




	*/
	

	

	
	
	
	


	



	

	
	
	












