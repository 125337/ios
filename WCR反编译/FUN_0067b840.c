// FUN_0067b840 @ 0067b840

void FUN_0067b840(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((DAT_028cbd48 & 1) == 0) {
    uVar1 = local_28;
    FUN_0067e750(local_28,local_18);
    if ((uVar1 & 1) == 0) {
      (*DAT_028cbce8)(local_18,local_20,local_28);
    }
  }
  else {
    (*DAT_028cbce8)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

