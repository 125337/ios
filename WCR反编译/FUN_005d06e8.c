// FUN_005d06e8 @ 005d06e8

void FUN_005d06e8(long param_1)

{
  uint uVar1;
  long lVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),&DAT_028cb783,0,1);
  lVar2 = param_1 + 0x28;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if (lVar2 != 0) {
    uVar1 = (uint)*(undefined8 *)(param_1 + 0x20);
    FUN_005a32d4();
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__QV__gN__b);
    }
    else {
      FUN_005cfa3c(local_28,*(undefined8 *)(param_1 + 0x20));
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

