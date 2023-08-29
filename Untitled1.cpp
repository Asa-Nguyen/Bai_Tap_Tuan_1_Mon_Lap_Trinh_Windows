#include<iostream>
#include <cstdlib>
#include <string>

using namespace std;
int a = 123;
int* fillarr(int number){
	int result[3];
	result[0] = number/100;
	result[1] = (number%100)/10;
	result[2] = (number%100)%10;
	return result;
}
int main()
{
  int num = 100 + (rand() % 999);
  cout<<"Num  random: "<<num<<endl;
  int nhap;
  cout<<"Nhap so: ";
  cin>>nhap;

  int num_split[3];
  //chia so may tinh cho
  for(int i = 0 ; i < 3 ; i++){
  	num_split[i] = fillarr(num)[i];
  }
  //chia so nguoi cho
  int input_split[3];
  for(int i = 0 ; i < 3 ;i++){
  	input_split[i] = fillarr(nhap)[i];
  }
  string result = "";
  for(int i = 0;i<3;i++){
  	if(input_split[i] == num_split[i]){
  		result += "+";
	  }
	else{
		for(int j = 0 ; j < 3 ; j++){
			if(input_split[i] == num_split[j]){
				result+="?";
			}else
				;
		}
	}
	  
  }
cout<<result;
  
  return 0;
}
