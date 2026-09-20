// FUN_01017334 @ 01017334

uint FUN_01017334(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  uint local_1c;
  undefined8 local_18;
  
  puVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar1,param_1);
  FUN_00963008();
  local_1c = 0;
  if (((ulong)puVar1 & 1) != 0) {
    uVar2 = local_18;
    FUN_01138c30(local_18,1);
    local_1c = (uint)uVar2;
  }
  _objc_storeStrong(&local_18,0);
  return local_1c & 1;
}

