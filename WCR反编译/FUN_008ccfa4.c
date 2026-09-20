// FUN_008ccfa4 @ 008ccfa4

void FUN_008ccfa4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  FUN_008ced34();
  if (((uVar1 & 1) == 0) ||
     ((uVar1 = local_28, FUN_008d048c(), (uVar1 & 1) == 0 &&
      (uVar1 = local_18, FUN_008d0a18(), (uVar1 & 1) == 0)))) {
    (*DAT_028ce220)(local_18,local_20,local_28);
  }
  else {
    FUN_008d0b34(local_18);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

