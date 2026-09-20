// FUN_008ae910 @ 008ae910

void FUN_008ae910(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  ulong uVar1;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_48 = 0;
  local_40 = param_7;
  local_3c = param_6;
  _objc_storeStrong(&local_48,param_8);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_9);
  uVar1 = local_18;
  FUN_008ba464(local_18,local_28);
  if ((uVar1 & 1) == 0) {
    (*DAT_028cdef8)(local_18,local_20,local_28,local_30,local_38,local_3c,local_40,local_48,local_50
                   );
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

