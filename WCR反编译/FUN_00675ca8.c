// FUN_00675ca8 @ 00675ca8

void FUN_00675ca8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_18;
  undefined8 *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_0064cd38();
  if ((uVar1 & 1) != 0) {
    FUN_00675d68(0,local_18,param_2);
    FUN_00675d68(1,local_18,param_2);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

