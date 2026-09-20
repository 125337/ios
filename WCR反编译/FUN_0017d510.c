// FUN_0017d510 @ 0017d510

void FUN_0017d510(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  ulong local_48;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_1c = param_2;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_1c;
  uVar3 = local_28;
  uVar2 = local_18;
  FUN_0017d778();
  _objc_retainAutoreleasedReturnValue();
  FUN_0017d9e4(uVar3,uVar1);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar3 & 1) == 0) {
    local_38 = 1;
  }
  else {
    uVar3 = local_18;
    FUN_0017dd44();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar3;
    if (uVar3 == 0) {
      local_38 = 1;
    }
    else {
      uVar3 = local_18;
      FUN_0017b118();
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = &cf_setTextColor_;
      local_48 = uVar3;
      _NSSelectorFromString();
      if (local_48 != 0) {
        uVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_respondsToSelector__026ca818,pcVar4);
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_48,pcVar4,local_40);
        }
      }
      _objc_storeStrong(&local_48,0);
      local_38 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

