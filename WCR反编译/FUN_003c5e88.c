// FUN_003c5e88 @ 003c5e88

void FUN_003c5e88(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028ca250 != (code *)0x0) {
    (*DAT_028ca250)(local_18,param_2);
  }
  uVar1 = local_18;
  FUN_00372850();
  if ((uVar1 & 1) != 0) {
    FUN_003c8f34(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

