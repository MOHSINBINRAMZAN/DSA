/* Sara kalsoom */
#include<iostream>
using namespace std;
class circle
{
	private:
		float radius;
	public:
		void getradius()
		{
			cout<<"\n enter rdius \t:";
			cin>>radius;
		}
		void calarea()
		{
			cout<<"area of circle \t:"<<3.14*radius*radius;
		}
};
//main function
int main()
{
	circle c;
	c.getradius();
	c.calarea();
	return 0;
}
