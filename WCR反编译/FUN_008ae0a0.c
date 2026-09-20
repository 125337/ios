// FUN_008ae0a0 @ 008ae0a0

void FUN_008ae0a0(ulong param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_008b8974(local_18,local_28,0);
  if ((uVar1 & 1) == 0) {
    (*DAT_028cdeb0)(local_18,local_20,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

