#include "defender/defender.h"

void DefRun()
{
    printf("=== DefRun ===\n");
    // printf("Game status: %d\n", game_status);
    switch (game_status)
    {
    case status_iddle_2:
        motion_data.vel_x = 0;
        motion_data.vel_y = 0;
        motion_data.vel_th = 0;
        motion_data.acceleration = 3;
        ManualMotion(&motion_data, &motion_return);
        break;

    case keyboard_forward:
        motion_data.vel_x = 0;
        motion_data.vel_y = 10;
        motion_data.vel_th = 0;
        motion_data.acceleration = 3;
        ManualMotion(&motion_data, &motion_return);
        break;

    case keyboard_backward:
        motion_data.vel_x = 0;
        motion_data.vel_y = -10;
        motion_data.vel_th = 0;
        motion_data.acceleration = 3;
        ManualMotion(&motion_data, &motion_return);
        break;

    case keyboard_left:
        motion_data.vel_x = -10;
        motion_data.vel_y = 0;
        motion_data.vel_th = 0;
        motion_data.acceleration = 3;
        ManualMotion(&motion_data, &motion_return);
        break;

    case keyboard_right:
        motion_data.vel_x = 10;
        motion_data.vel_y = 0;
        motion_data.vel_th = 0;
        motion_data.acceleration = 3;
        ManualMotion(&motion_data, &motion_return);
        break;

    case keyboard_left_rotation:
        motion_data.vel_x = 0;
        motion_data.vel_y = 0;
        motion_data.vel_th = -10;
        motion_data.acceleration = 3;
        ManualMotion(&motion_data, &motion_return);
        break;

    case keyboard_right_rotation:
        motion_data.vel_x = 0;
        motion_data.vel_y = 0;
        motion_data.vel_th = 10;
        motion_data.acceleration = 3;
        ManualMotion(&motion_data, &motion_return);
        break;

    case status_preparation_kickoff_home:
        PreparationKickOffDef();
        break;

    case game_kickoff_home:
        printf("actibe robot: %d\n", n_active_robot);
        if(n_active_robot > 4)
            GameMainQuadrupleDef();
        else if(n_active_robot > 3)
            GameMainTripleDef();
        else if(n_active_robot > 2)
            GameMainDoubleDef();
        else
            GameMainSingleDef();
        break;
    }
}

bool PreparationKickOffDef()
{
    switch (game_sub_status)
    {
    case 0:
        if (n_active_robot)
            break;

    case 1:
        printf("aku def\n");
        break;
    }
}

void GameMainSingleDef()
{
    printf("%d %d\n", game_sub_status, style);
   switch(game_sub_status)
   {
    case 0:
        switch(style)
        {
            case 0:
                game_sub_status = 10;
                break;  
            case 1:
                game_sub_status = 20;
                break;
        }
        break;
    
    case 10:
        printf("masuk Def\n");
        break;
   }
}

void GameMainDoubleDef()
{
   switch(game_status)
   {
    case game_kickoff_home:
        printf("masuk game kickoff home\n");
        break;
   }
}

void GameMainTripleDef()
{
   switch(game_status)
   {
    case game_kickoff_home:
        printf("masuk game kickoff home\n");
        break;
   }
}

void GameMainQuadrupleDef()
{
   printf("Halo banh Quadruple\n");
}