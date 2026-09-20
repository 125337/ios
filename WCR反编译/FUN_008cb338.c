// FUN_008cb338 @ 008cb338

void FUN_008cb338(undefined8 param_1)

{
  ulong uVar1;
  char *pcVar2;
  ulong uVar3;
  long local_60;
  ulong local_58;
  long local_50;
  ulong local_48 [3];
  char *local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    pcVar2 = "BaseMsgContentViewController";
    _objc_getClass();
    uVar1 = local_20;
    local_30 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_48[0] = uVar1;
    local_50 = 0;
    while (uVar1 = local_48[0], local_50 < 0x28 && local_48[0] != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = uVar1;
      for (local_60 = 0; local_60 < 0x1e && local_58 != 0; local_60 = local_60 + 1) {
        if ((local_30 != (char *)0x0) &&
           (uVar3 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isKindOfClass__0269cd68,local_30),
           uVar1 = local_58, (uVar3 & 1) != 0)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = uVar1;
          local_24 = 1;
          goto LAB_008cb534;
        }
        uVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_nextResponder_0269d0d8);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_58;
        local_58 = uVar3;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      local_24 = 0;
LAB_008cb534:
      _objc_storeStrong(&local_58,0);
      if (local_24 != 0) goto LAB_008cb5c4;
      local_50 = local_50 + 1;
      uVar3 = local_48[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48[0];
      local_48[0] = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    local_18 = 0;
    local_24 = 1;
LAB_008cb5c4:
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

