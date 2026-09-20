// FUN_01be1ee0 @ 01be1ee0

void FUN_01be1ee0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 auStack_38 [8];
  undefined *local_30;
  undefined *local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineMomentsMonitor_026ce718;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR___dispatch_main_q_02578680;
  local_28 = puVar2;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_48 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_28;
  local_40 = uVar4;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_48,0);
  _objc_destroyWeak(auStack_38);
  return;
}

