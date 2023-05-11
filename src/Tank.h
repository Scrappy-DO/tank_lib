#ifndef Tank_h
#define Tank_h
#include "Arduino.h"
#include "L298n.h"

class Tank{
	enum TankDir
	{
		FORWARD,
		BACKWARD,
		CENTRAL_LEFT,
		CENTRAL_RIGHT,
		LEFT,
		RIGHT	
	};

	class Tank {
		private:
			int en_L;
			int in1_L;
			int in2_L;
			int en_R;
			int in1_R;
			int in2_R;
			bool invert_L;
			bool invert_R

			L298n::Driver motor;
	
		public:
			TankDir dir;
			Tank(int enL, int in1L, int in2L, int enR, int in1R, int in2R, bool invertL=false, bool invertR=false);
			void begin();
			void drive(bool dirL, bool dirR, int speedL, int speedR);
			void driveDir(int _dir, int _speed);
			void stop();

	};
};


#endif