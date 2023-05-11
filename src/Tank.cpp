#include "Arduino.h"
#include "Tank.h"
#include "L298n.h"

TankLib::Tank::Tank(int enL, int in1L, int in2L, int enR, int in1R, int in2R, bool invertL, bool invertR){
	en_L = enL;
	in1_L = in1L;
	in2_L = in2L;
	invert_L = invertL

	en_R = enR;
	in1_R = in1R;
	in2_R = in2R;
	invert_R = invertR;

	motor = L298n::Driver(en_L, en_R, in1_L, in2_L, in1_R, in2_R, invert_L, invert_R);
}

TankLib::Tank::begin(){
	motor.begin();
}

TankLib::Tank::drive(bool dirL, bool dirR, int speedL, int speedR){

}

TankLib::Tank::driveDir(int _dir, int _speed){

}

TankLib::Tank::stop(){

}