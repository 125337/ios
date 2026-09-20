// FUN_00053ae0 @ 00053ae0

byte FUN_00053ae0(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  int local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 1;
    local_30 = 1;
  }
  else {
    FUN_0004d7e4();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar1);
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsObject__0269cbb8,local_20);
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_addObject__0269d180,local_20);
      uVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
      if (0x4000 < uVar2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeAllObjects_0269d508);
      }
      local_30 = 0;
    }
    else {
      local_11 = 0;
      local_30 = 1;
    }
    _objc_sync_exit(uVar1);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if (local_30 == 0) {
      local_11 = 1;
      local_30 = 1;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

