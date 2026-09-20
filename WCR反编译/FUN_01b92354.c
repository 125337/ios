// FUN_01b92354 @ 01b92354

void FUN_01b92354(long param_1)

{
  undefined *puVar1;
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
  _objc_storeStrong();
  puVar1 = PTR___dispatch_main_q_02578680;
  local_28 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01b92430;
  local_38 = &DAT_0257be28;
  _objc_copyWeak(auStack_30,param_1 + 0x20);
  _dispatch_async(puVar1,&local_50);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_destroyWeak(auStack_30);
  _objc_storeStrong(&local_20,0);
  return;
}

