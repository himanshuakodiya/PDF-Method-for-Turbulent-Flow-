#include <cstdlib>
#include <ctime>
#include <iostream>
using namespace std;
int main(int argc, char *argv[]){
    //cout << "Generate a new random number every 1 seconds \n\n";

    // create a clock and start timer
    clock_t TimeZero = clock(); //Start timer

    double deltaTime = 5;
    double secondsToDelay = 0;
    bool exit = false;
	float l=100 , vel=5 , sum=0.0;
	const int t =l/vel;
	float temperature[t];
	cout <<"length of tube is "<<l<<" m "<<endl;
	cout <<"velocity of the fluid inside tube is "<<vel<<" m/s"<<endl;
    // generate random seed using time 
    srand(time(0));
	int j=0;
    while(!exit) {

        // get delta time in seconds
        deltaTime = (clock() - TimeZero) / CLOCKS_PER_SEC;
        cout << "\b" << secondsToDelay - deltaTime << "\b";

         // compare if delta time is 2 or more seconds
        if(deltaTime > secondsToDelay){
            cout << "                      ";

            // generate new random number
            int i = 250 + rand() % 100 + 1;
			temperature[j]=i; 
            cout << "\nNew temperature: " << i << " K          \n"; 

            //reset the clock timers
            deltaTime = clock();
            TimeZero = clock();
            j++;
            if (j==t)
            exit =true ;
        }
      }
	for (int j=0;j<t ;j++)
	sum+=temperature[j];
	//cout<<temperature[j]<<" ";
	float avg=sum/t;
	cout <<endl;
	cout <<"mean temperature is "<<avg<<"k "<<endl;
    return 0;
}


