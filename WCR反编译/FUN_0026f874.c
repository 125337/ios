// FUN_0026f874 @ 0026f874

void FUN_0026f874(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_40 [3];
  undefined4 local_24;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == 0) {
    local_24 = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_ygStyleLayout_026a1500);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_18;
      FUN_0026fbfc(local_18,PTR_s_ygStyleLayout_026a1500);
      _objc_retainAutoreleasedReturnValue();
      local_40[0] = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_markDirty_026a1508);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_markDirty_026a1508);
      }
      _objc_storeStrong(local_40,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setNeedsLayout_0269deb8);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

