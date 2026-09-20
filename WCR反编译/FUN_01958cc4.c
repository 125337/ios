// FUN_01958cc4 @ 01958cc4

void FUN_01958cc4(long param_1,byte param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  byte local_38;
  long local_30;
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_28 = 0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_30 = param_1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_38 = local_19 & 1;
  _objc_copyWeak(auStack_40,param_1 + 0x20);
  uVar1 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = uVar1;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_28,0);
  return;
}

