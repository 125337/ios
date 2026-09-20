// FUN_001a4864 @ 001a4864

void FUN_001a4864(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_001a4c54;
  local_38 = &DAT_02578c20;
  local_28 = lVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = lVar1;
  FUN_001a4984(lVar1,uVar2,0,&local_50);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

