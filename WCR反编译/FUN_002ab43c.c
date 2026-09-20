// FUN_002ab43c @ 002ab43c

void FUN_002ab43c(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c97a0)(local_18,local_20,local_28);
  uVar1 = local_18;
  FUN_002bad18();
  if (((uVar1 & 1) == 0) &&
     (uVar1 = local_18, FUN_002b8ccc(local_18,local_28,&cf_MMTabBar_didAddSubview), (uVar1 & 1) != 0
     )) {
    FUN_002b8558(local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

