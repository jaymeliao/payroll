#include <iostream>
#include <iomanip> 
using namespace std;

int main(){
	bool running = true;
	while (running){
	
	double hour;


		
	cout << "Enter the hours you work this month : " <<endl;
	cin>>hour;
		cout<<"                                                                    "<<'\n';
	float income = hour*10.1;
	cout<<"Your Income is : " <<  fixed <<setprecision(2) << income << " CAD " <<'\n';
	cout<<"boomshakalaka   "<<'\n';
	double EI = income * 1.63/100;
	cout<< "Total EI Deductions is : "<<setprecision(2)<< EI << " CAD " << endl;
	double CPP = (income-291.66)*4.95/100;
	cout <<"Total CPP Deduction is : "<< fixed <<setprecision(2)<<CPP<< " CAD " <<'\n';
	cout<<"Total Deduction is "<<fixed<<setprecision(2)<< EI+CPP<< " CAD "<<'\n';
    cout<<"--------------------------------------------"<<'\n';
	cout<<"Your Payroll will be : " << fixed<<setprecision(2)<< income-(EI+CPP)<< " CAD "<< '\n';
bool loop = true;
while(loop){
	char choice;
	cout<<"Enter[y/n] to continue :"<<endl;
	cin>>choice;
	if (choice == 'y')
	loop=false; // get out of the while (loop)
	else if (choice=='n')
	running = false, loop = false; //end both loops
	else{
	
	cout<<"What the hell ?"<<endl; }
	} 
}






	
	
	
	
	return 0;  
} 
