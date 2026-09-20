// FUN_00fed348 @ 00fed348

void FUN_00fed348(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined8 local_38;
  undefined8 local_30;
  undefined1 auStack_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  _objc_initWeak(auStack_28,local_18);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_30 = DAT_028e3120;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_00fef0a4;
  local_50 = &DAT_0257c708;
  local_38 = local_30;
  _objc_copyWeak();
  uVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar1;
  _dispatch_async(puVar2,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

