#include<iostream>
using namespace std;

class Clock{
    private:
        int hour;
        int minute;
    public:
        Clock(int hour,int minute):hour(hour),minute(minute){

        }
        int getHour(){return hour;}
        int getMinute(){return minute;}

        void setHour(int h){this->hour = h;}
        void setMinute(int m){this->minute = m;}
};

class Calculate:public Clock{
    private:
        float hourAngle;
        float minuteAngle;
    public:
        Calculate(int hour,int minute):Clock(hour,minute){
            hourAngle = 30*(hour % 12) + (minute/60)*30;
            minuteAngle = 6*minute;
        }

        int result(){ return float(hourAngle - minuteAngle);}
};

int main(){
    Clock setClock(12,1);
    cout << Calculate(setClock.getHour(),setClock.getMinute()).result();
    return 0;
}