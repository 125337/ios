// FUN_005cdd70 @ 005cdd70

void FUN_005cdd70(long param_1)

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
    FUN_005cd85c(lVar1,&cf_editor_disappear);
    FUN_005cd9a0(&cf_editor_disappear);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

