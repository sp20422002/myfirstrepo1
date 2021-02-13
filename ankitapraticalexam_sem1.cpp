#include<iostream>
using namespace std;
class institute{
	char cname[100];
	int no;//number of enrolled students
	int fees;
	int duration;//in years
	
	public:
	void getinfo();
	void showinfo();
		
};
void institute ::getinfo(){
	cout<<"Enter the details of courses: \n";
	cout<<"Enter the course name :";
	cin>>cname;
	cout<<"Enter the total enrolled students : ";
	cin>>no;
	cout<<"Enter the fees : ";
	cin>>fees;
	cout<<"Enter the duration of course : ";
	cin>>duration;
}
void institute ::showinfo(){
	
	cout<<"\tName :"<<cname;
	cout<<"\n\tNumber of enrolled student :"<<no;
	cout<<"\n\tFees :"<<fees;
	cout<<"\n\tDuration of course(in years) :"<<duration;
}
int main()
{
	int n;
	cout<<"Enter the total courses : ";
	cin>>n;
	institute cou[n];
	for(int i=0;i<n;i++)
	{
		cou[i].getinfo();
	}
	cout<<"Information of courses : \n";
	for(int i=0;i<n;i++)
	{
		cout<<"\nCourse "<<i+1<<"\n";
		cou[i].showinfo();
	}
	return 0;
	
}
