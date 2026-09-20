// FUN_00236610 @ 00236610

void FUN_00236610(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) ||
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
     (uVar1 & 1) == 0)) {
    lVar2 = 1;
    local_28 = 1;
  }
  else {
    local_30 = 6;
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getSectionCount_026a0b70);
      local_30 = uVar1;
    }
    for (local_38 = 0; lVar2 = local_38 - local_30, local_38 < local_30; local_38 = local_38 + 1) {
      uVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_getSectionAt__026a0a78,local_38 & 0xffffffff);
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      if (uVar1 != 0) {
        FUN_002369ac(uVar1);
      }
      _objc_storeStrong(&local_40,0);
    }
    local_28 = 0;
  }
  _objc_storeStrong(lVar2,&local_18,0);
  return;
}

