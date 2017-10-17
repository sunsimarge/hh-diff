// 5 hh

/*
Рассмотрим все возможные числа ab для 1<a<6 и 1<b<6:
22=4, 23=8, 24=16, 25=32 32=9, 33=27, 34=81, 35=243 42=16, 43=64, 44=256, 45=1024, 52=25, 53=125, 54=625, 55=3125
Если убрать повторения, то получим 15 различных чисел.

Сколько различных чисел ab для 2<a<135 и 2<b<111? 
*/

//135=11*11
//111=10*10

#include <cmath>
#include <TMath.h>
#include <Riostream.h>
#include <set>  

void hh5(){

// pow(a,b)

set<Double_t> mySet;

Double_t a;
Double_t b;

	for(a=3;a<135;a++){
		
		for(b=3;b<111;b++){
			
			mySet.insert(pow(a,b));
		
			}
	}
	
	cout<<"test="<<mySet.size()<<endl;


}
