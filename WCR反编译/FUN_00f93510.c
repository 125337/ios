// FUN_00f93510 @ 00f93510

byte FUN_00f93510(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                 undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_50;
  undefined4 local_44;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  local_40 = param_5;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_getRed_green_blue_alpha__026ca660,param_2,param_3,param_4,param_5);
  if ((uVar1 & 1) == 0) {
    local_50 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_getWhite_alpha__026ca668,&local_50,local_40);
    if ((uVar1 & 1) == 0) {
      local_11 = 0;
    }
    else {
      *local_38 = local_50;
      *local_30 = local_50;
      *local_28 = local_50;
      local_11 = 1;
    }
  }
  else {
    local_11 = 1;
  }
  local_44 = 1;
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

