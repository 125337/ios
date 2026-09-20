// FUN_01c1a244 @ 01c1a244

void FUN_01c1a244(long param_1)

{
  undefined *puVar1;
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
  
  puVar1 = PTR_WCRefineMomentsMonitor_026ce718;
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineMomentsMonitor_026ce718,PTR_s_sharedInstance_0269cd30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_50 = PTR___NSConcreteStackBlock_02578660;
  local_48 = 0xc2000000;
  local_44 = 0;
  local_40 = FUN_01c1a384;
  local_38 = &DAT_02579c60;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = uVar2;
  _objc_copyWeak(auStack_28,param_1 + 0x28);
  _dispatch_async(puVar1,&local_50);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_destroyWeak(auStack_28);
  _objc_storeStrong(&local_30,0);
  return;
}

