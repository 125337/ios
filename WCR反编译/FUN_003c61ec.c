// FUN_003c61ec @ 003c61ec

void FUN_003c61ec(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028ca270 != (code *)0x0) {
    (*DAT_028ca270)(local_18,param_2);
  }
  uVar1 = local_18;
  FUN_00372850();
  if ((uVar1 & 1) != 0) {
    FUN_003c8f34(local_18);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

