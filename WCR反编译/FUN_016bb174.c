// FUN_016bb174 @ 016bb174

byte FUN_016bb174(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  undefined4 local_2c;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  local_28 = param_2;
  if ((local_20 == 0) || (param_2 == 0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar1;
    while (local_38 != 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isKindOfClass__0269cd68,local_28);
      if ((uVar1 & 1) != 0) {
        local_11 = 1;
        goto LAB_016bb2dc;
      }
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_38;
      local_38 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_11 = 0;
LAB_016bb2dc:
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

