// FUN_002abf20 @ 002abf20

void FUN_002abf20(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_002bad18();
  if ((uVar1 & 1) == 0) {
    if (local_28 != 0) {
      FUN_002b7184(local_18,&cf_MMTabBar_willMoveToWindow_beforeOrig);
    }
    (*DAT_028c97b8)(local_18,local_20,local_28);
  }
  else {
    (*DAT_028c97b8)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

