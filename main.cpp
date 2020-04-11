#include<iostream>
#include<string>
using namespace std;

int main(){
	/* Initial Arrays (variables) */
	string unit[20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
	string tens[8]={"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninty"};
	int userin , unitA , temp , tensA , userChoice;
	bool ProgramStatus=true;
	/* main program */
	while(ProgramStatus==true){
		cout<<"Enter any number (0-99)\n>>\t";
		cin>>userin;
		if(userin>=0 && userin<=19){
			cout<<unit[userin]<<"\n";
		}else if(userin>=20 && userin<=99){
				temp=userin;
				unitA=temp%10;
				tensA=temp/10;
				if(unitA==0){
					cout<<tens[tensA-2]<<"\n";
				}else{
					cout<<tens[tensA-2]<<unit[unitA]<<"\n";
				}
		 }
		cout<<"what do you wana do\n>>\t 1.continue\n>>\t 2.end\n>>\t";
		cin>>userChoice;
		if(userChoice==1){
			ProgramStatus=true;
		}else{
			ProgramStatus=false;
		}
	
	}
}