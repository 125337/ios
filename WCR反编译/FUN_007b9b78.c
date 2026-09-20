// FUN_007b9b78 @ 007b9b78

void FUN_007b9b78(ulong param_1)

{
  ulong uVar1;
  ulong local_18;
  
  FUN_007ac8c8();
  _objc_retainAutoreleasedReturnValue();
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_onNeedReload_026a82d0);
  if ((param_1 & 1) == 0) {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_updateMainSessionListNotify__026a65f8);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_updateMainSessionListNotify__026a65f8,1);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_onNeedReload_026a82d0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

