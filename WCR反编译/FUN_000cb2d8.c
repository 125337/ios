// FUN_000cb2d8 @ 000cb2d8

void FUN_000cb2d8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long local_68;
  ulong local_60;
  long local_58;
  ulong local_50;
  ulong local_48;
  ulong local_30;
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
    uVar1 = local_20;
    FUN_000cb654();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 == 0) {
      FUN_000c79b0();
      uVar2 = local_20;
      local_48 = uVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar2;
      local_58 = 0;
      while (uVar1 = local_50, local_58 < 0x28 && local_50 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_60 = uVar1;
        for (local_68 = 0; local_68 < 0x1e && local_60 != 0; local_68 = local_68 + 1) {
          if ((local_48 != 0) &&
             (uVar2 = local_60,
             (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_isKindOfClass__0269cd68,local_48),
             uVar1 = local_60, (uVar2 & 1) != 0)) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar1;
            local_24 = 1;
            goto LAB_000cb550;
          }
          uVar1 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_nextResponder_0269d0d8);
          if ((uVar1 & 1) == 0) break;
          uVar2 = local_60;
          (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_nextResponder_0269d0d8);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = local_60;
          local_60 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar1);
        }
        local_24 = 0;
LAB_000cb550:
        _objc_storeStrong(&local_60,0);
        if (local_24 != 0) goto LAB_000cb5e0;
        local_58 = local_58 + 1;
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_50;
        local_50 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      local_18 = 0;
      local_24 = 1;
LAB_000cb5e0:
      _objc_storeStrong(&local_50,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_24 = 1;
      local_18 = uVar1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

