// FUN_01bdce78 @ 01bdce78

void FUN_01bdce78(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 auStack_40 [8];
  undefined *local_38;
  undefined8 local_30;
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
  _objc_copyWeak(auStack_40,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  local_58 = uVar3;
  (*(code *)PTR__objc_retain_02578638)();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  local_50 = uVar4;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_28;
  local_30 = *(undefined8 *)(param_1 + 0x40);
  local_48 = uVar3;
  _dispatch_async(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_destroyWeak(auStack_40);
  return;
}

