// FUN_00237f3c @ 00237f3c

void FUN_00237f3c(long param_1)

{
  long lVar1;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if (lVar1 != 0) {
    FUN_0022a7fc(*(undefined8 *)(param_1 + 0x20),0);
    FUN_0023802c(local_30,*(undefined8 *)(param_1 + 0x20));
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

