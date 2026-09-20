// FUN_01bd6794 @ 01bd6794

void FUN_01bd6794(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  puVar2 = PTR___dispatch_main_q_02578680;
  local_28 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_20;
  local_58 = PTR___NSConcreteStackBlock_02578660;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_01bd68a4;
  local_40 = &DAT_025816c8;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = uVar1;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  _dispatch_async(puVar2,&local_58);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_20,0);
  return;
}

