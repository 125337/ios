// FUN_000585f8 @ 000585f8

undefined8 FUN_000585f8(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_000597d8();
  iVar1 = (int)uVar2;
  if (iVar1 == 2) {
    local_18 = 1;
  }
  else if (iVar1 == 4) {
    local_18 = 2;
  }
  else if (iVar1 == 8) {
    local_18 = 4;
  }
  else {
    local_18 = 0;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

