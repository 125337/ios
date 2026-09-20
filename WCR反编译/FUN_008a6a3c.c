// FUN_008a6a3c @ 008a6a3c

void FUN_008a6a3c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if ((local_18 == 0) ||
     (uVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getImageScrollView_026a98a8),
     (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getImageScrollView_026a98a8);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 != 0) {
      _objc_setAssociatedObject(uVar1,&DAT_028cddda,local_18,0);
    }
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

