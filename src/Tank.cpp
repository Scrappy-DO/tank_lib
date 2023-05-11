#include "Arduino.h"
#include "Tank.h"
#include "L298n.h"

Tank::Tank::Tank(int enL, int in1L, int in2L, int enR, int in1R, int in2R, bool invertL=false, bool invertR=false){
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

Tank::Tank::begin(){
	motor.begin();
}

Tank::Tank::drive(bool dirL, bool dirR, int speedL, int speedR){

}

Tank::Tank::driveDir(int _dir, int _speed){

}

Tank::Tank::stop(){
	
}