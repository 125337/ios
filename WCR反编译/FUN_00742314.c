// FUN_00742314 @ 00742314

void FUN_00742314(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_0074699c();
  (*DAT_028cc698)(local_18,local_20,local_28,local_30);
  uVar2 = local_18;
  FUN_00744a5c();
  if ((((uVar2 & 1) != 0) && (uVar2 = local_18, FUN_00747044(), (uVar2 & 1) == 0)) &&
     (((uVar1 & 1) != 0 || (uVar1 = local_18, FUN_00746f28(), (uVar1 & 1) != 0)))) {
    FUN_00746804(local_18);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

