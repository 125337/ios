// FUN_01bbce8c @ 01bbce8c

void FUN_01bbce8c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined1 auStack_30 [8];
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar2 = param_1 + 0x28;
  local_28 = param_1;
  _objc_loadWeakRetained();
  uVar1 = local_20;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01bbe270;
  local_38 = &DAT_0257a7d0;
  _objc_copyWeak(auStack_30,param_1 + 0x28);
  FUN_01bbcf8c(lVar2,uVar1,uVar3,&local_50);
  (*(code *)PTR__objc_release_02578630)(lVar2);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_20,0);
  return;
}

