// FUN_002daa28 @ 002daa28

void FUN_002daa28(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_28;
  long local_20;
  long local_18;
  
  uVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = uVar1;
  if (uVar1 != 0) {
    _objc_getAssociatedObject(uVar1,&DAT_028c9803);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    if ((uVar2 & 1) != 0) {
      FUN_002da398(local_28,0,&cf_MMTabBarBase_interactivePop_timeout);
      FUN_002da738(local_28,&cf_MMTabBarBase_interactivePop_timeout);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

