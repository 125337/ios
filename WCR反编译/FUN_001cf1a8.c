// FUN_001cf1a8 @ 001cf1a8

void FUN_001cf1a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  FUN_0022527c(param_5,&cf_ImageScrollView_onFullScreenDragToRectbeforeorig);
  (*DAT_028c8fc8)(param_1,param_2,param_3,param_4,param_5,param_6);
  FUN_0022527c(param_5,&cf_ImageScrollView_onFullScreenDragToRectafterorig);
  return;
}

