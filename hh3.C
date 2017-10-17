// 3 hh

void hh3(){
	//1117 x 1117
	
const Int_t size1 = 5; //for test
const Int_t size2 = 1117;

Int_t d=2;
Int_t v, sum;

	for(v=1, d=2, sum=v; d<size2; v+=4*d, d+=2){
		sum+=4*v+10*d;
	}
	
	cout<<"sum="<<sum<<endl;

}

// sum=929737741
