// FUN_00558018 @ 00558018

byte FUN_00558018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_2c;
  ulong local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_4);
  if ((local_20 == 0) || (local_28 == 0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_locationInView__026ca798,local_28);
    uVar1 = local_28;
    local_60 = param_1;
    uStack_58 = param_2;
    local_40 = param_1;
    uStack_38 = param_2;
    FUN_00549a6c(param_1,param_2);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,uStack_38,local_28,PTR_s_hitTest_withEvent__026ca670,0);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar1;
      FUN_005499c4();
      local_11 = (byte)uVar1 & 1;
      local_2c = 1;
      _objc_storeStrong(&local_68,0);
    }
    else {
      local_11 = 1;
      local_2c = 1;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

