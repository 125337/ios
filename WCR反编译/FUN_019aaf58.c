// FUN_019aaf58 @ 019aaf58

void FUN_019aaf58(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined8 local_38;
  undefined1 auStack_30 [8];
  undefined *local_28;
  long local_20;
  long local_18;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isCancelled_026a1c20);
  if ((uVar1 & 1) == 0) {
    puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
               *(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___dispatch_main_q_02578680;
    local_28 = puVar2;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_019ab17c;
    local_58 = &DAT_02585f70;
    _objc_copyWeak(auStack_30,param_1 + 0x38);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_retain_02578638)();
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    local_50 = uVar4;
    (*(code *)PTR__objc_retain_02578638)();
    puVar2 = local_28;
    local_48 = uVar5;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = puVar2;
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = uVar4;
    _dispatch_async(puVar3,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_50,0);
    _objc_destroyWeak(auStack_30);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

