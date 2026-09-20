// FUN_00436b70 @ 00436b70

undefined4 FUN_00436b70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined4 local_14;
  undefined8 *puVar2;
  
  puVar2 = &local_30;
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_00439e64();
  if ((uVar1 & 1) == 0) {
    uVar3 = local_20;
    (*DAT_028ca990)(local_20,local_28,local_30);
    local_14 = (undefined4)uVar3;
  }
  else {
    local_14 = 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_14;
}

