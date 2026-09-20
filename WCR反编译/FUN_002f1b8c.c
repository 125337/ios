// FUN_002f1b8c @ 002f1b8c

byte FUN_002f1b8c(double param_1,undefined8 param_2,double param_3,ulong param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  ulong local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_5;
  local_20 = param_4;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  uVar1 = local_20;
  _objc_getAssociatedObject(local_20,DAT_026dfda0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if (local_30 == uVar1) {
    uVar1 = local_20;
    FUN_002f67a4(0);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_locationInView__026ca798,local_20);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
      if ((param_1 < param_3 * 0.3) || (param_3 - param_3 * 0.3 < param_1)) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
  else {
    uVar1 = local_20;
    (*DAT_028c9a00)(local_20,local_28,local_30,local_38);
    local_11 = (byte)uVar1 & 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

