// FUN_008aebd4 @ 008aebd4

void FUN_008aebd4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_008bea70(local_18,local_28);
  if ((uVar1 & 1) == 0) {
    (*DAT_028cdf08)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

