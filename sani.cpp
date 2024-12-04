#include<iostream>
using namespace std;
int main(){
	int n,income,balance=0,expense;
	
	do{
		cout<<"MENU"<<endl;
		cout<<"1.Add income"<<endl;
		cout<<"2.Add expense"<<endl;
		cout<<"3.View balance"<<endl;
		cout<<"4.exit"<<endl;
		
	  
	 
		cout<<"enter your option"<<endl;
		cin>>n;
		
		
		switch(n){
		
		
		case 1:{ 
		cout<<"enter your income"<<endl;
		cin>>income;
		  
		if (income>0){
	balance=balance+income;}
		break;	}
		
		case 2:{
			cout<<"enter your expense"<<endl;
			cin>>expense;
			if(expense>balance){
				cout<<"insufficient balance for this expense"<<endl;
			}
			else{
			balance=balance-expense;
			}
			break;
		}
		case 3:{
			cout<<"balance="<< income-expense<<"RS"<<endl;
			
			break;
		}
		
		case 4:{
			cout<<"exit"<<endl;
			break;
		}
		
        default:
        	cout<<"invalid input"<<endl;
}
	}while(n!=4);
}
