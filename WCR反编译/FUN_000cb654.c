// FUN_000cb654 @ 000cb654

void FUN_000cb654(undefined8 param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  long local_50;
  ulong local_48;
  long local_40;
  ulong local_38;
  ulong *local_30;
  int local_24;
  ulong local_20;
  ulong local_18;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    FUN_000c79b0();
    uVar3 = local_20;
    local_30 = puVar1;
    if (puVar1 == (ulong *)0x0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_38 = uVar3;
      local_40 = 0;
      while (uVar3 = local_38, local_40 < 0x16 && local_38 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_48 = uVar3;
        for (local_50 = 0; local_50 < 0xe && local_48 != 0; local_50 = local_50 + 1) {
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,local_30);
          uVar3 = local_48;
          if ((uVar2 & 1) != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar3;
            local_24 = 1;
            goto LAB_000cb878;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_nextResponder_0269d0d8);
          if ((uVar3 & 1) == 0) break;
          uVar2 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_nextResponder_0269d0d8);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_48;
          local_48 = uVar2;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        local_24 = 0;
LAB_000cb878:
        _objc_storeStrong(&local_48,0);
        if (local_24 != 0) goto LAB_000cb908;
        local_40 = local_40 + 1;
        uVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_38;
        local_38 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      local_18 = 0;
      local_24 = 1;
LAB_000cb908:
      _objc_storeStrong(&local_38,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

