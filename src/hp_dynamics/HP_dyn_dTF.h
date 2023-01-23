/*
 * File: HP_dyn_dTF.h
 *
 * Code generated for Simulink model 'HP_dyn_dTF'.
 *
 * Model version                  : 5.25
 * Simulink Coder version         : 9.4 (R2020b) 29-Jul-2020
 * C/C++ source code generated on : Fri Jan 20 17:27:31 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_HP_dyn_dTF_h_
#define RTW_HEADER_HP_dyn_dTF_h_
#include <string.h>
#include <stddef.h>
#ifndef HP_dyn_dTF_COMMON_INCLUDES_
#define HP_dyn_dTF_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* HP_dyn_dTF_COMMON_INCLUDES_ */

#include "HP_dyn_dTF_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T HP_dyn_dTF_states[24];        /* '<S1>/HP_dyn_dTF' */
} DW_HP_dyn_dTF_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  real_T In1[6];                       /* '<Root>/In1' */
} ExtU_HP_dyn_dTF_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real_T Out1[6];                      /* '<Root>/Out1' */
} ExtY_HP_dyn_dTF_T;

/* Real-time Model Data Structure */
struct tag_RTM_HP_dyn_dTF_T {
  const char_T * volatile errorStatus;
};

/* Block states (default storage) */
extern DW_HP_dyn_dTF_T HP_dyn_dTF_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_HP_dyn_dTF_T HP_dyn_dTF_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_HP_dyn_dTF_T HP_dyn_dTF_Y;

/* Model entry point functions */
extern void HP_dyn_dTF_initialize(void);
extern void HP_dyn_dTF_step(void);
extern void HP_dyn_dTF_terminate(void);

/* Real-time Model object */
extern RT_MODEL_HP_dyn_dTF_T *const HP_dyn_dTF_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Note that this particular code originates from a subsystem build,
 * and has its own system numbers different from the parent model.
 * Refer to the system hierarchy for this subsystem below, and use the
 * MATLAB hilite_system command to trace the generated code back
 * to the parent model.  For example,
 *
 * hilite_system('M1DCS_2_rust/M1_HP_Dynamics/HP_dyn_dTF')    - opens subsystem M1DCS_2_rust/M1_HP_Dynamics/HP_dyn_dTF
 * hilite_system('M1DCS_2_rust/M1_HP_Dynamics/HP_dyn_dTF/Kp') - opens and selects block Kp
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'M1DCS_2_rust/M1_HP_Dynamics'
 * '<S1>'   : 'M1DCS_2_rust/M1_HP_Dynamics/HP_dyn_dTF'
 */
#endif                                 /* RTW_HEADER_HP_dyn_dTF_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
