#include<iostream>
using namespace std;

//variables
int a=10;
int valeur_entree=0;

//petite fonction pour commencer
int patate(int argument)
{
return argument+1;
}

/*
a present, nous allons regarder les templates:
en utilisant deux templates ici T et S
*/
template<typename T, typename S>
T maximum(const T& a, const S& b)
{
	if(a>b)	
		return a;
	else
		return b;
}


int main()
{
	//premier test
	cout<<"Bonjour petite fleur"<<endl;
	
	//affichage d'une variable
	cout<<"la valeur que j'ai mis dans a est :"<<a<<endl;
//	cout<<"Entrer une valeur pour faire mumuse :";
//	cin>>valeur_entree;
//	nclude<iostream>
using namespace std;

//variables
int a=10;
int valeur_entree=0;

//petite fonction pour commencer
int patate(int argument)
{
return argument+1;
}

/*
a present, nous allons regarder les templates:
en utilisant deux templates ici T et S
*/
#include<iostream>
using namespace std;

//variables
int a=10;
int valeur_entree=0;

//petite fonction pour commencer
int patate(int argument)
{
return argument+1;
}

/*
a present, nous allons regarder les templates:
en utilisant deux templates ici T et S
*/
template<typename T, typename S>
T maximum(const T& a, const S& b)
{
        if(a>b)
                return a;
        else
template<typename T, typename S>
T maximum(const T& a, const S& b)
{
        if(a>b)
                return a;
        else
cout<<"Valeur entree : "<<valeur_entree<<endl;
	
	//utilisation d'une fonction
	cout<<"Utilisation d'une fonction : "<<patate(8)<<endl;
	
	//utilisation d'un template avec la fonction maximum definie precedement
	cout<<"Utilisation du template :"<<endl;
		cout<<"\t max de deux int :"<<maximum(1,2)<<endl;	
		cout<<"\t max de deux double :"<<maximum(1.,2.)<<endl;	
		cout<<"\t max d'un int et d'un double :"<<maximum(1,2.)<<endl;	
		



	return 0;
}
