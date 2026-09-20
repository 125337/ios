// FUN_00898938 @ 00898938

undefined8 FUN_00898938(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  FUN_008a28c0();
  uVar1 = (uint)uVar2;
  if ((uVar2 & 1) != 0) {
    FUN_0089ccc0();
    if ((uVar1 & 1) != 0) {
      local_18 = 0;
      goto LAB_00898a04;
    }
  }
  uVar3 = local_20;
  (*DAT_028cdc00)(local_20,local_28,local_30,param_4);
  local_18 = uVar3;
LAB_00898a04:
  _objc_storeStrong(&local_30,0);
  return local_18;
}

