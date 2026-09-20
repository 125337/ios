// FUN_0060c8ec @ 0060c8ec

void FUN_0060c8ec(long param_1)

{
  long lVar1;
  long lVar2;
  long local_48;
  long local_40 [3];
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x20;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 != 0) {
    _objc_setAssociatedObject(lVar1,DAT_026f44a8,0,1);
    lVar1 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026f4498);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_40[0] = lVar1;
    _objc_getAssociatedObject(local_28,DAT_026f44a0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar2;
    FUN_0060ca34(local_28,local_40[0],lVar2);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

