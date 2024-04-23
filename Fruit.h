#include<iostream>
using namespace std;
class Fruit{
	public:virtual void taste(){
		cout<<"----no taste as such-----"<<endl;
	}
	   
};
class Apple:public Fruit{
	public :void jam(){
		cout<<"Create Jam From Apple"<<endl;
	}
	void taste(){
		cout<<"  Apple Taste Sweet "<<endl;
	}
};
class Mango:public Fruit{
	
	public :void pulp(){
		cout<<"Mango Pulp get Created..."<<endl;
	}
	void taste(){
		cout<<"  Mango Taste Sweet "<<endl;
	}
};
class Orange:public Fruit{
	
	public :void juice(){
		cout<<"Orange Juice ....."<<endl;
	}
	void taste(){
		cout<<"  Orange Taste Sweet  and sour"<<endl;
	}
};
int main()
{
  Fruit f;
  f.taste();
 cout<<"\n"<<endl;	
 	Apple apple;
 	apple.taste();
 	apple.jam();
	
	cout<<"\n"<<endl;	
	Mango m;
    m.pulp();
    m.taste();
	cout<<"\n"<<endl;	
	
	Orange o;
	o.juice();
	o.taste();
	
	cout<<"\n"<<endl;
//	Fruit *ptr=&o;//Parent=child
//	ptr->taste();
//	
//	
//	Fruit *basket[4];
//	basket[0]=&f;
//	basket[1]=&apple;
//	basket[2]=&m;
//	basket[3]=&o;
//		cout<<"\n"<<endl;	
//	for(int i=0;i<4;i++){
//		basket[i]->taste();
//		if(typeid(*basket[i])==typeid(Orange)){
//			cout<<"----Orange Is in Basket----"<<endl;
//		Orange *oObj=dynamic_cast<Orange*>(basket[i]);//-;//>juice();
//		oObj->juice();
//		
//		//(dynamic_cast<Orange*>(basket[i]))->juice();
//		
//		}
//		
//		
//	}
	
 
	
	
	
	return 0;
}
