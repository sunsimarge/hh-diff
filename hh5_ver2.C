// 5 hh
#include <Riostream.h>
#include <TMath.h>

void  hh5(){
	
	Int_t r,w,y,s,q=0;
	Int_t count=0; //counter;
		
	// rwys+rrsw=syqy
	
	for(r=1;r<10;r++){
		
		for(w=1;w<10;w++){
			
			for(y=0;y<10;y++){
				
				for(s=1;s<10;s++){
					
					for(q=0;q<10;q++){
						
						//for(r!=w)
						
						if (r*1000+w*100+y*10+s+r*1000+r*100+s*10+w == s*1000+y*100+q*10+y)
			
							//count+=1; 
							cout<<"r="<<r<<"; w="<<w<<"; y="<<y<<"; s="<<s<<"; q="<<q<<endl;
						
						}
					}
				}
			}
		}
	
	cout<<"Counter="<<count<<endl;
	
	}
	
	

