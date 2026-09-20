// FUN_0054982c @ 0054982c

void FUN_0054982c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9,undefined8 param_10)

{
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_38 = 0;
  local_29 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  local_50 = 0;
  local_44 = param_7;
  _objc_storeStrong(&local_50,param_8);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_9);
  local_60 = 0;
  _objc_storeStrong(&local_60,param_10);
  FUN_005581fc(local_38);
  FUN_00551b64(local_38);
  (*DAT_028cb3e0)(local_18,local_20,local_28,local_29 & 1,local_38,local_40,local_44,local_50,
                  local_58,local_60);
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

