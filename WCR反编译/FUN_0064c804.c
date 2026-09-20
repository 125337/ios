// FUN_0064c804 @ 0064c804

void FUN_0064c804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 uVar2;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_18;
  (*DAT_028cbbd0)(local_18,local_20,local_28);
  uVar1 = (uint)uVar2;
  FUN_006620a0();
  if ((uVar1 & 1) != 0) {
    FUN_00675700(local_18,local_28);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

