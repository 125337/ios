// FUN_01575db8 @ 01575db8

void FUN_01575db8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  _objc_setAssociatedObject(*(undefined8 *)(param_1 + 0x20),&DAT_028e3a08,0,1);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    FUN_01575044();
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__QV__gN__b);
    }
    else {
      FUN_01575374(*(undefined8 *)(param_1 + 0x20),local_28);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

