// FUN_001cf090 @ 001cf090

void FUN_001cf090(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_48 = 0;
  local_40 = param_6;
  local_38 = param_5;
  local_30 = param_1;
  uStack_28 = param_2;
  local_20 = param_3;
  uStack_18 = param_4;
  _objc_storeStrong(&local_48,param_7);
  (*DAT_028c8fb8)(local_30,uStack_28,local_20,uStack_18,local_38,local_40,local_48);
  FUN_0022527c(local_38,&cf_ImageScrollView_displayImageCache_withFrame_);
  _objc_storeStrong(&local_48,0);
  return;
}

