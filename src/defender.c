#include "defender/defender.h"

void DefPrepKickoffHome(def_data_t *data, uint8_t *ret)
{
    printf("DEF_Prep_kickoff: %d %d\n", data->robot_x[data->robot_num], data->robot_y[data->robot_num]);
}

void DefKickoffHome(def_data_t *data, uint8_t *ret)
{
    printf("DEF_Start_kickoff: %d %d\n", data->robot_x[data->robot_num], data->robot_y[data->robot_num]);
    *ret = 100;
}

void DefRun(def_data_t *data, uint8_t *ret)
{
    // printf("stat: %d \n", data->game_status);

    switch (data->game_status)
    {
    case PREP_KICKOFF_HOME:
        DefPrepKickoffHome(data, ret);
        break;
    case START_KICKOFF_HOME:
        DefKickoffHome(data, ret);
        break;
    }
}