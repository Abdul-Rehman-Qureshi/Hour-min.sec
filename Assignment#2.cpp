#include<iostream>
using namespace std;

class Time{
	private:
		int  hour;
		int  min;
		int  sec;
		char mode;
		
		public:
		 	Time():hour(0),min(0),sec(0),mode('0') {
		 		cout<<"Default constructor :)" << endl;	
			 }
			Time (int ho1, int min1, int sec1, char mode1){
				hour=ho1;
				min=min1;
				sec=sec1;
				mode=mode1;
				
				cout<<"Parameterized constructor 1 :)" << endl;
				if (hour>=1&&hour<=12){
					if(sec>=0 && sec<=59){
						cout<< "Ok working fine :) :) " << endl;
					}
				}
				else
					cout<<"Enter Hours in 1-12 & Seconds in 0-59" << endl;	
			}
			Time (int ho2, int min2, int sec2) {
				hour=ho2;
				min=min2;
				sec=sec2;
				cout<<"Parameterized constructor 2 :)" << endl;
				if (hour>=1&&hour<=12){
					if(sec>=0 && sec<=59){
						cout<< "Ok working fine :) :)" << endl;
					}
				}
				else
					cout<<"Enter Hours in 1-12 & Seconds in 0-59" << endl;	
			}
			Time (Time &obj){
				//Copy Constructor
					hour=obj.hour;
					min=obj.min;
					sec=obj.sec;
					mode=obj.mode;
			}
			int getHours(){
				cout<<"Enter Hours : "   << endl;
				cin>> hour;
				cout<<"Enter Minutes : " << endl;
				cin>> min;
				cout<<"Enter Seconds : " << endl;
				cin>> sec;	
			}
			char getMode(){
				cout<<"Enter Mode : " << endl;
				cin>> mode;	
			}	
			void setTime(int h_1,int m_1,int s_1,char mode_1){
				hour =  h_1;
				min  =  m_1;
				sec  =  s_1;
				mode =  mode_1;
			}
			void displaydate(){
				cout<<hour<<":" <<min <<":" << sec  <<":" << mode <<endl;
			}
			double convertToSeconds(){
			 int convertToSeconds1 = (hour* 3600) + (min * 60) + sec;
			 cout<< "After converting into Seconds is "<< convertToSeconds1<< endl;
      		 //return convertToSeconds1;	
			}
			double convertToMinutes() {
				  int total_minutes = (hour * 60) + min + (sec / 60);
				  cout<< "After converting into Minutes  is "<< total_minutes<< endl;
                  //return total_minutes;
			}
			double convertToHours() {
				double total_hours = hour + (double)min / 60 + (double)sec / 3600;
				cout<< "After converting into Hours is "<< total_hours<< endl;
    			//return total_hours;
			}
			void convertTo24HourFormat() {
			}
};

int main(){
	Time t1(0,9,10);
//	t1.getHours();
//	t1.getMode();
	t1.displaydate();
//	
//	t1.convertToSeconds();
//	t1.convertToMinutes();
//	t1.convertToHours();
	
	

}

