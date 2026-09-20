// FUN_002a89f4 @ 002a89f4

void FUN_002a89f4(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  FUN_002b7bc4();
  _objc_retainAutoreleasedReturnValue();
  local_28 = param_1;
  FUN_002bad18();
  uVar1 = (uint)param_1;
  if ((param_1 & 1) == 0) {
    FUN_002d50e0();
    if ((uVar1 & 1) == 0) {
      FUN_002daee4(local_28);
      FUN_002bf5c8(local_28,&cf_MMTabBarController_hideTabBar_beforeOrig);
      (*DAT_028c9730)(local_18,local_20);
    }
    else {
      FUN_002db1f4(&cf_MMTabBarController_hideTabBar_momentsKeep);
    }
  }
  else {
    (*DAT_028c9730)(local_18,local_20);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

