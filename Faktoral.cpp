#include <iostream>
using namespace std;

int faktor(int x);	

int main()
{
	int x;
    
   cout<<"Program Nilai Faktoral"<<endl;
   cout<<"==============================="<<endl;
   cout<<"Masukan Nilai :"<<endl;
   
    cin>>x;	
	cout<<" = "<<faktor(x)<<endl;
	cout<<endl;		
	cout<<" Trims ...  ";				

}

int faktor(int x) 
{
	int hasil=1, i;		
	for(i=x;i>0;i--)
	{
		if(i!=1)
			cout<<i<<"x";
			else
			cout<<"1";
			hasil=hasil*i;
	}
	return hasil;
}
