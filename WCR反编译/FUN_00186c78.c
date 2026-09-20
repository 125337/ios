// FUN_00186c78 @ 00186c78

void FUN_00186c78(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  uVar1 = local_18;
  FUN_00192a00(local_18,local_30);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_18;
  local_38 = uVar1;
  FUN_001a1034(local_18,local_28,uVar1);
  if (((uVar2 & 1) == 0) && (uVar1 = local_18, FUN_001a1788(local_18,local_38), (uVar1 & 1) == 0)) {
    (*DAT_028c8948)(local_18,local_20,local_28,local_38);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

