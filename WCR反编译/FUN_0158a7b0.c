// FUN_0158a7b0 @ 0158a7b0

void FUN_0158a7b0(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_01577c3c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  if (uVar1 == 0) {
    local_18 = 0;
    local_2c = 1;
  }
  else {
    FUN_015611fc();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    if (uVar1 == 0) {
      local_18 = 0;
    }
    else {
      pcVar2 = &cf_PushViewController_animated_;
      _NSSelectorFromString();
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_respondsToSelector__026ca818,pcVar2);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_pushViewController_animated__0269d590,local_28,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,pcVar2,local_28,1);
      }
      uVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

