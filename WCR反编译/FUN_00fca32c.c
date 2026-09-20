// FUN_00fca32c @ 00fca32c

void FUN_00fca32c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  lVar3 = *(long *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  local_30 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  (**(code **)(lVar3 + 0x10))();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_30,0);
  return;
}

