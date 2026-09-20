// FUN_002a8b0c @ 002a8b0c

void FUN_002a8b0c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  FUN_002b7bc4();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  FUN_002bad18();
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    FUN_002d50e0();
    if ((uVar1 & 1) == 0) {
      FUN_002daee4(local_30);
      FUN_002bf5c8(local_30,&cf_MMTabBarController_hideTabBarForIndex_beforeOrig);
      (*DAT_028c9738)(local_18,local_20,local_28);
    }
    else {
      FUN_002db1f4(&cf_MMTabBarController_hideTabBarForIndex_momentsKeep);
    }
  }
  else {
    (*DAT_028c9738)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_30,0);
  return;
}

