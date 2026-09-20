// FUN_00244e6c @ 00244e6c

void FUN_00244e6c(long param_1)

{
  long lVar1;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    _objc_setAssociatedObject(lVar1,&DAT_028c9370,0,1);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

