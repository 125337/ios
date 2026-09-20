// FUN_00423668 @ 00423668

void FUN_00423668(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar3;
  long local_48;
  undefined4 local_40;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  undefined8 *puVar2;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  puVar2 = &local_30;
  local_30 = 0;
  _objc_storeStrong(puVar2,param_3);
  uVar1 = (uint)puVar2;
  FUN_00423cc8();
  if ((uVar1 & 1) == 0) {
    local_18 = 0;
    local_40 = 1;
  }
  else if (local_20 == 0) {
    local_18 = 0;
    local_40 = 1;
  }
  else {
    lVar3 = local_20;
    FUN_00423eb8(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = lVar3;
    if (lVar3 == 0) {
      local_18 = 0;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar3;
    }
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

