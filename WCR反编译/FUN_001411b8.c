// FUN_001411b8 @ 001411b8

void FUN_001411b8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 byte param_5)

{
  ulong uVar1;
  ulong local_60;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_48;
  ulong local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_29 = param_5;
  local_28 = param_4;
  local_20 = param_3;
  local_18 = param_2;
  FUN_00150088();
  if ((param_2 & 1) == 0) {
    (*DAT_028c8710)(local_18,local_20,local_28,local_29 & 1);
  }
  else {
    uVar1 = local_18;
    FUN_00150124();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if (uVar1 == 0) {
      (*DAT_028c8710)(local_18,local_20,local_28,local_29 & 1);
      local_48 = 1;
    }
    else {
      FUN_0014fff4();
      local_50 = uVar1;
      if (uVar1 == 0) {
        (*DAT_028c8710)(local_18,local_20,local_28,local_29 & 1);
        local_48 = 1;
      }
      else {
        FUN_00150d58(local_28,uVar1);
        FUN_001506f4(local_18,local_38);
        uVar1 = local_18;
        local_58 = param_1;
        FUN_00150914();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar1;
        if (uVar1 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setCurrentPage__0269f4f0,local_28);
        }
        FUN_00150dc4(local_58,local_38,local_28,local_29 & 1);
        _objc_storeStrong(&local_60,0);
        local_48 = 0;
      }
    }
    _objc_storeStrong(&local_38,0);
  }
  return;
}

