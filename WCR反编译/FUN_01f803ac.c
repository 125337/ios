// FUN_01f803ac @ 01f803ac

void FUN_01f803ac(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_50;
  undefined1 auStack_48 [8];
  byte local_40;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  local_38 = 0;
  local_20 = param_1;
  local_18 = param_1;
  _WCRefinePreparePlayableVoicePath(uVar1,&local_38);
  _objc_storeStrong(&local_28,local_38);
  puVar2 = PTR___dispatch_main_q_02578680;
  local_29 = (byte)uVar1;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x28);
  uVar1 = local_28;
  local_40 = local_29 & 1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar1;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_50,0);
  _objc_destroyWeak(auStack_48);
  _objc_storeStrong(&local_28,0);
  return;
}

