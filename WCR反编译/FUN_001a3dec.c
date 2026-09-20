// FUN_001a3dec @ 001a3dec

void FUN_001a3dec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  long local_20;
  long local_18;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_001a43cc;
  local_38 = &DAT_0257ab40;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar1;
  _objc_copyWeak(auStack_28,param_1 + 0x30);
  FUN_001a3f00(&cf_O9eTy,&cf_N__gR_uHeOHQNn_u_,uVar2,&local_50);
  _objc_destroyWeak(auStack_28);
  _objc_storeStrong(&local_30,0);
  return;
}

