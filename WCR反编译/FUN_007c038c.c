// FUN_007c038c @ 007c038c

void FUN_007c038c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_40;
  int local_38;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028ccd80)(local_18,local_20,local_28);
  if ((DAT_028cce20 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar1 = local_18;
    FUN_007c9fd4();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == 0) {
      local_38 = 1;
    }
    else {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textColor_0269f098);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_007ca53c();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTextColor__026caa98,local_40);
        local_38 = 0;
      }
      else {
        local_38 = 1;
      }
    }
    _objc_storeStrong(&local_40,0);
    if (local_38 == 0) {
      local_38 = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

