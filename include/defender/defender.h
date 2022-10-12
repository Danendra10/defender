#ifndef DEFENDER_H
#define DEFENDER_H

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include "multirole_func/multirole_func.h"
#include "motion/motion.h"



//=-------Global-------=//
extern uint8_t game_status;
extern uint8_t n_active_robot;
static uint16_t game_sub_status;
extern uint8_t n_active_robot;
extern uint8_t style;

//=--------Prep--------=//
bool PreparationKickOffDef();

//=--------Main--------=//
void GameMainSingleDef();
void GameMainDoubleDef();
void GameMainTripleDef();
void GameMainQuadrupleDef();


#endif