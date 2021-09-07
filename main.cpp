#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	float l,m,p,w,tw,ts,tq,pith;
	
	cout << "give an arrival rate (L) : ";
	cin >> l;
	
	cout << "give the service time (m) : ";
	cin >> m;
	
	p=l/m;
	cout <<endl;
	cout << "service rate :"<<endl;
	cout << "p = ";
	cout << p <<endl;
		
	w = (p*p) / (1-p);	
	cout <<endl;
	cout << "Items Waiting :"<<endl;
	cout << "w = ";
	cout << w <<endl;
	
	tw = w/l;	
	cout <<endl;
	cout << "average waiting time :"<<endl;
	cout << "tw = ";
	cout << tw <<endl;
	
	ts = 1 / m;	
	cout <<endl;
	cout << "Service time :"<<endl;
	cout << "ts = ";
	cout << ts <<endl;
	
	tq = ts + tw;	
	cout <<endl;
	cout << "Residence time :"<<endl;	
	cout << "tq = ts + tw => tq = ";
	cout << tq <<endl;
	
	pith = (1 - p)*100;	
	cout <<endl;
	cout << "probability that there are no objects in the system :"<<endl;	
	cout << "p(0) = p - 1 => p(0) = ";
	cout << pith ;
	cout << "%";
	cout <<endl<<endl;

	system("pause");
	return 0;
}
// © papadi97