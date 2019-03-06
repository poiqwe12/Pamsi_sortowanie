#pragma once
#ifndef _nazwa_pliku_
#define _nazwa_pliku_
#include <iostream>

template<typename Typ,int Wymiar> 
class Dane
{
	Typ tab[Wymiar];
public:
	const Typ& operator [] (unsigned int index)const
	{
		if (index < Wymiar) return tab[index];
		exit(EXIT_FAILURE);
	}
	void Inicjuj_losowo();


};


template <typename Typ, int Wymiar>
std::ostream& operator << (std::ostream &Strm, const Dane<Typ, Wymiar> &D)
{
	for (int i =0;i<Wymiar;++i)
	{
		Strm << D[i] << " ";
	}
	return Strm;
}
template<typename Typ, int Wymiar>
void Dane<Typ, Wymiar>::Inicjuj_losowo()
{
	for (Typ &i : tab)
	{
		i = rand() ;
	}
}


#endif
