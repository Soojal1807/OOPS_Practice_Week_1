#include <iostream>
using namespace std;

class Car{
    private:
    bool isRunning;
    int Speed;
    
    public:
    Car(){
        isRunning = false;
        Speed = 0;
    }
    
    void Start(){
        if(!isRunning){
            isRunning = true;
            Speed = 0;
            cout<<"Started the Car."<<endl;
        } else {
            cout<<"Car is Already Running"<<endl;
        }
    }
    
    void Accelerate(int Increase){
        if(isRunning){
            Speed += Increase;
            cout<<"Car is Running at "<< Speed << " Kmph." <<endl;
        } else {
            cout<<"Car is not running"<<endl;
        }
    }
    
    void Stop(){
        if(isRunning){
            Speed = 0;
            isRunning = false;
            cout<<"Car has been Stopped"<<endl;
        } else {
            cout<<"Car has to stopped"<<endl;
        }
    }
};

int main(){
    Car myCar;
    myCar.Start();
    myCar.Accelerate(50);
    myCar.Stop();
    
    return 0;
}