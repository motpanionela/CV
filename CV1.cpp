#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
int varsta,anulnasterii,anulcurent;
float media ;
char n,u,m,e,l,r;
	cout <<"\n\n\n\t\t\t\t\tBuna ziua astazi va vom arata cum vom face un CV "<< endl;
	cout<<"\n\t\t\t\t\t\t\t\tVizionare placuta"<<endl;
    cout <<"Introduceti Numele Dvs"<<endl;
	cin>>n>>u>>m>>e>>l>>r;
    cout<<"Introduceti anul nasterii"<<endl;
    cin >>anulnasterii;
    cout <<"Introduceti anul curent"<<endl;
	cin>>anulcurent;
	cout <<"Introduceti media"<<endl;
	cin>>media;
	
     cout<<"\n\n\t\t\t\t\t\t\t\t\CV"<<endl;
         cout <<"Numele Dvs este -----"<<n<<u<<m<<e<<l<<r<<endl;
    cout<<" Anul nasterii este ------"<<anulnasterii<< endl;
    cout <<"Anul curent este ----"<<anulcurent<<endl;
	cout <<"Varsta Dvs este ----"<< anulcurent-anulnasterii<<endl;
	cout <<"Media Dvs este ----"<<media;
	
	return 0;
}
