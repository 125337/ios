// FUN_00830c88 @ 00830c88

void FUN_00830c88(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40 [3];
  ulong local_28;
  undefined4 local_1c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cd1fa);
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeFromSuperview_026ca800);
      _objc_setAssociatedObject(local_18,&DAT_028cd1fa,0,1);
    }
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cd1fb);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = uVar1;
    if (uVar1 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_boolValue_026ca540);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setClipsToBounds__026ca8c8,uVar1 & 0xffffffff);
      _objc_setAssociatedObject(local_18,&DAT_028cd1fb,0,1);
    }
    _objc_storeStrong(local_40);
    _objc_storeStrong(&local_28,0);
    local_1c = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

