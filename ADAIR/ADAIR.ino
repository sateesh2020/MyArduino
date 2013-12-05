dif
#ifndef SERVO_ROLL_I
# define SERVO_ROLL_I         0.0
#endif
#ifndef SERVO_ROLL_D
# define SERVO_ROLL_D         0.0
#endif
#ifndef SERVO_ROLL_INT_MAX
# define SERVO_ROLL_INT_MAX   5
#endif
#ifndef ROLL_SLEW_LIMIT
# define ROLL_SLEW_LIMIT      0
#endif
#ifndef SERVO_PITCH_P
# define SERVO_PITCH_P        0.6
#endif
#ifndef SERVO_PITCH_I
# define SERVO_PITCH_I        0.0
#endif
#ifndef SERVO_PITCH_D
# define SERVO_PITCH_D        0.0
#endif
#ifndef SERVO_PITCH_INT_MAX
# define SERVO_PITCH_INT_MAX  5
#endif
#ifndef PITCH_COMP
# define PITCH_COMP           0.2
#endif
#ifndef SERVO_YAW_P
# define SERVO_YAW_P          0.0
#endif
#ifndef SERVO_YAW_I
# define SERVO_YAW_I          0.0
#endif
#ifndef SERVO_YAW_D
# define SERVO_YAW_D          0.0
#endif
#ifndef SERVO_YAW_INT_MAX
# define SERVO_YAW_INT_MAX    5
#endif
#ifndef RUDDER_MIX
# define RUDDER_MIX           0.5
#endif


//////////////////////////////////////////////////////////////////////////////
// Navigation control gains
//
#ifndef NAV_ROLL_P
# define NAV_ROLL_P           0.7
#endif
#ifndef NAV_ROLL_I
# define NAV_ROLL_I           0.0
#endif
#ifndef NAV_ROLL_D
# define NAV_ROLL_D           0.02
#endif
#ifndef NAV_ROLL_INT_MAX
# define NAV_ROLL_INT_MAX     5
#endif
#ifndef NAV_PITCH_ASP_P
# define NAV_PITCH_ASP_P      0.65
#endif
#ifndef NAV_PITCH_ASP_I
# define NAV_PITCH_ASP_I      0.0
#endif
#ifndef NAV_PITCH_ASP_D
# define NAV_PITCH_ASP_D      0.0
#endif
#ifndef NAV_PITCH_ASP_INT_MAX
# define NAV_PITCH_ASP_INT_MAX 5
#endif
#ifndef NAV_PITCH_ALT_P
# define NAV_PITCH_ALT_P      0.65
#endif
#ifndef NAV_PITCH_ALT_I
# define NAV_PITCH_ALT_I      0.0
#endif
#ifndef NAV_PITCH_ALT_D
# define NAV_PITCH_ALT_D      0.0
#endif
#ifndef NAV_PITCH_ALT_INT_MAX
# define NAV_PITCH_ALT_INT_MAX 5
#endif


//////////////////////////////////////////////////////////////////////////////
// Energy/Altitude control gains
//
#ifndef THROTTLE_TE_P
# define THROTTLE_TE_P        0.50
#endif
#ifndef THROTTLE_TE_I
# define THROTTLE_TE_I        0.0
#endif
#ifndef THROTTLE_TE_D
# define THROTTLE_TE_D        0.0
#endif
#ifndef THROTTLE_TE_INT_MAX
# define THROTTLE_TE_INT_MAX  20 
#endif
#ifndef THROTTLE_SLEW_LIMIT
# define THROTTLE_SLEW_LIMIT  0
#endif
#ifndef P_TO_T
# define P_TO_T               2.5
#endif


//////////////////////////////////////////////////////////////////////////////
// Crosstrack compensation
//
#ifndef XTRACK_GAIN
# define XTRACK_GAIN          10 // deg/m * 100
#endif
#ifndef XTRACK_ENTRY_ANGLE
# define XTRACK_ENTRY_ANGLE   3000 // deg * 100
#endif


//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////
// DEBUGGING
//////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////////////////
// DEBUG_SUBSYSTEM
//
#ifndef DEBUG_SUBSYSTEM
# define DEBUG_SUBSYSTEM		0
#endif


//////////////////////////////////////////////////////////////////////////////
// DEBUG_LEVEL
//
#ifndef DEBUG_LEVEL
# define DEBUG_LEVEL SEVERITY_LOW
#endif


//////////////////////////////////////////////////////////////////////////////
// Dataflash logging control
//
#ifndef LOG_ATTITUDE_FAST
# define LOG_ATTITUDE_