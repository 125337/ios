// FUN_007c0230 @ 007c0230

void FUN_007c0230(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028ccd78)(param_1,param_2);
  if ((DAT_028cce20 & 1) != 0) {
    uVar1 = local_18;
    FUN_007c9fd4();
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    if (uVar1 != 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textColor_0269f098);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      FUN_007ca53c();
      (*(code *)PTR__objc_release_02578630)(uVar1);
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTextColor__026caa98,local_28);
      }
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

