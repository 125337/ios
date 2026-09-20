// FUN_0054fb5c @ 0054fb5c

uint FUN_0054fb5c(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar4;
  undefined8 local_20;
  uint local_14;
  undefined8 *puVar3;
  
  puVar3 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar3,param_1);
  uVar1 = (uint)puVar3;
  FUN_0054fab4();
  uVar4 = local_20;
  FUN_0054fcb8();
  uVar2 = (uint)uVar4;
  local_14 = uVar1;
  if ((uVar2 != 0) && (local_14 = uVar2, uVar1 < uVar2)) {
    local_14 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

