// 4 hh
#include <Riostream.h>
#include <TMath.h>

void  hh4(){
	
	//rqr+ryrq=rzrr
	
	Int_t r,q,y,z=0;
	Int_t count=0; //counter;
		
	
	for(r=1;r<10;r++){
		
		for(q=0;q<10;q++){
	
			
			for(y=0;y<10;y++){
				
				for(z=0;z<10;z++){
						
						
						//if (r*1000+w*100+y*10+s+r*1000+r*100+s*10+w == s*1000+y*100+q*10+y)
						if (r*100+q*10+r+r*1000+y*100+r*10+q ==r*1000+z*100+r*10+r)
							cout<<"r="<<r<<"; q="<<q<<"; y="<<y<<"; z="<<z<<endl;
						
						}
					}
				}
		}
	
	//cout<<"Counter="<<count<<endl;
	
	}
	 
	 /*
r=1; q=0; y=2; z=3
r=1; q=0; y=3; z=4
r=1; q=0; y=4; z=5
r=1; q=0; y=5; z=6
r=1; q=0; y=6; z=7
* 
r=1; q=0; y=7; z=8
r=1; q=0; y=8; z=9
r=2; q=0; y=1; z=3
r=2; q=0; y=3; z=5
r=2; q=0; y=4; z=6
* 
r=2; q=0; y=5; z=7
r=2; q=0; y=6; z=8
r=2; q=0; y=7; z=9
r=3; q=0; y=1; z=4
r=3; q=0; y=2; z=5
* 
r=3; q=0; y=4; z=7
r=3; q=0; y=5; z=8
r=3; q=0; y=6; z=9
r=4; q=0; y=1; z=5
r=4; q=0; y=2; z=6
* 
r=4; q=0; y=3; z=7
r=4; q=0; y=5; z=9
r=5; q=0; y=1; z=6
r=5; q=0; y=2; z=7
r=5; q=0; y=3; z=8
* 
r=5; q=0; y=4; z=9
r=6; q=0; y=1; z=7
r=6; q=0; y=2; z=8
r=6; q=0; y=3; z=9
r=7; q=0; y=1; z=8
* 
r=7; q=0; y=2; z=9
r=8; q=0; y=1; z=9
*/
// total 32

