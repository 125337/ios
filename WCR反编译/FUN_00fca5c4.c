// FUN_00fca5c4 @ 00fca5c4

void FUN_00fca5c4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  lVar2 = *(long *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar1;
  (**(code **)(lVar2 + 0x10))();
  _objc_storeStrong(&local_28,0);
  return;
}

