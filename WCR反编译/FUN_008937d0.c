// FUN_008937d0 @ 008937d0

void FUN_008937d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_0089ccc0();
  if ((uVar1 & 1) == 0) {
    (*DAT_028cda00)(local_18,local_20,local_28);
  }
  else {
    (*DAT_028cda00)(local_18,local_20,*(undefined8 *)PTR____NSArray0___02578280);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

