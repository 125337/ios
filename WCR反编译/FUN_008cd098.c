// FUN_008cd098 @ 008cd098

void FUN_008cd098(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 local_30;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_28;
  FUN_008d048c();
  (*DAT_028ce228)(local_18,local_20,local_28,local_30);
  uVar2 = local_18;
  FUN_008ced34();
  if (((uVar2 & 1) != 0) &&
     (((uVar1 & 1) != 0 || (uVar1 = local_18, FUN_008d0a18(), (uVar1 & 1) != 0)))) {
    FUN_008d0b34(local_18);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

