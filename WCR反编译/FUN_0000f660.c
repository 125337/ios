// FUN_0000f660 @ 0000f660

void FUN_0000f660(long param_1)

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
    FUN_0000f54c(lVar1,&DAT_028c79f1,0);
    FUN_0000f54c(local_28,&DAT_028c79f0,1);
    FUN_0000f720(local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

