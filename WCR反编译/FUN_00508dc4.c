// FUN_00508dc4 @ 00508dc4

void FUN_00508dc4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  ulong uVar3;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_00508eb4();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cafe8)(local_18,local_20,local_28);
  }
  else {
    uVar3 = local_18;
    FUN_0050a394();
    if ((uVar3 & 1) == 0) {
      (*DAT_028cafe8)(local_18,local_20,local_28);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

