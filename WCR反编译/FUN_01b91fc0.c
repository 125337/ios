// FUN_01b91fc0 @ 01b91fc0

void FUN_01b91fc0(long param_1)

{
  undefined *puVar1;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  code *local_38;
  undefined *local_30;
  undefined1 auStack_28 [8];
  long local_20;
  long local_18;
  
  puVar1 = PTR___dispatch_main_q_02578680;
  local_20 = param_1;
  local_18 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_48 = PTR___NSConcreteStackBlock_02578660;
  local_40 = 0xc2000000;
  local_3c = 0;
  local_38 = FUN_01b92074;
  local_30 = &DAT_0257be28;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  _dispatch_async(puVar1,&local_48);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_destroyWeak(auStack_28);
  return;
}

