#include <iostream>
#include <math.h>
using namespace std;
//basal metabolic rate female
float FemaleBMR(float weight, float height, int age){
    float BMR;
	BMR = 655 + (4.3 * weight) + (4.7 * height) - (4.7 * age);
	return BMR;
} 
//basal metabolic rate male
float MaleBMR(float weight, float height, int age){
    float BMR;
	BMR = 66 + (6.3 * weight) + (12.9 * height) - (6.8 * age);
	return BMR;
} 

int main()
{
    float calories,amountChocolate,weight,height;
    int age;
    float chocolateBar = 230; //assuming a chocolate bar has 230 calories
    char sex;
       cout<<"Weight (lbs)? "<<endl;
       cin>>weight;
       cout<<"Height (in)? "<<endl;
       cin>>height;
       cout<<"Sex (M or F)? "<<endl;
       cin>>sex;
       cout<<"Age? "<<endl;
       cin>>age;
	switch(sex) {
	case 'M':
		calories = MaleBMR(weight,height,age);
		break;
	case 'F':
		calories = FemaleBMR(weight,height,age);
		break;
	default: 
		cout<<"Sex was not available."<<endl;
		return 0;
	}
   amountChocolate = calories / chocolateBar;
   cout<<"You would need to eat "<<amountChocolate<<" chocolate bars to maintain your weight." <<endl;
   return 0;
}