#ifndef _PARAMS_H_
#define _PARAMS_H_

#define dt (float) 0.0025
#define LOOP_FREQUENCY (float) 400
#define dt_micros (int) 2500

#define ride_height (float) 0.057 //6.2cms height of the sensor.
#define DIST_BW_ACCEL_AXLE (float) 0.225// distance between rear axle and accelerometer
#define COG (float) DIST_BW_ACCEL_AXLE*0.5f //distance between rear axle and COG in meters
#define OP_POS (float) DIST_BW_ACCEL_AXLE*0.6f
#define OP_FLOW_MAX_SPEED (float) 6.0
#define DAMPING (float) 0.4f

#define THROTTLE_OFFSET 1535
#define THROTTLE_MAX 1810
#define THROTTLE_DELTA 10
#define THROTTLE_RANGE_INV (float) (1.0f/float(THROTTLE_MAX - THROTTLE_OFFSET))
#define A0 (float) 0.943214474
#define A1 (float) -7.71363682
#define A2 (float) 18.7732828
#define A3 (float) -0.00528010
#define ROLL_RES (float) 2.0
#define DISCHARGE_RANGE (float) (4.2-3.6)/4.2
#define MAX_LEARNING_SPEED OP_FLOW_MAX_SPEED/2
#define MIN_LEARNING_SPEED (float) 0.5f
#define MAX_GAIN (float) 0.1f
#define DECAY_TIME (float) 10.0f //time in seconds after which car's model becomes practically useless
#define DECAY_RATE (float) dt/DECAY_TIME 
#define INITIAL_NOISE (float) 1.0f
#define MIN_FEEDBACK_FACTOR 0.7

#define DECLINATION (float) 1.3f
#define GPS_GLITCH_SPEED (float) 15.0f //max speed difference that will be tolerated between internal estimate and gps

#define MODE_STOP 0x00
#define MODE_STANDBY 0X01
#define MODE_MANUAL 0x02
#define MODE_PARTIAL 0X03
#define MODE_AUTO 0x04
#define MODE_AUTO_LUDICROUS 0x05
#define MODE_NO_GPS 0x06
#define MODE_CONTROL_CHECK 0x07

#define FIX_TIMEOUT 1000

#define LUDICROUS 0x05 //interchangable with MODE_AUTO_LUDICROUS
#define CRUISE 0x04 //interchangable with MODE_AUTO

#define START_SIGN 0xFE
#define OFFSET_ID 0x01
#define COMMAND_ID 0X02

#define CONTROL_FREQUENCY LOOP_FREQUENCY/2
#define FUTURE_TIME (float) 2/CONTROL_FREQUENCY
#define CONTROL_TIME (float) 1000/CONTROL_FREQUENCY //control time in ms
#define CONTROL_TIME_SEC (float) 1/CONTROL_FREQUENCY

#define WP_CIRCLE 0.5 //1/2 meter radius around waypoint.

#define WP_ID 0x0005
#define STATE_ID 0x0006
#define MODE_ID 0x0007
#define CLEAR_ID 0x0008
#define MARK_ID 0x0009
#define CALIB_ID 0x000A
#define SET_ORIGIN_ID 0x000B

#define GYRO_CAL 0x10
#define ACCEL_CAL 0x20
#define MAG_CAL 0x30
#define DONE 0x40

#define ERROR_CODE 0xFF

#define COM_BAUD 230400
#define GPS_BAUD 230400
#define JEVOIS_BAUD 9600

#endif
