// FUN_00104274 @ 00104274

void FUN_00104274(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  uint local_40;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  puVar3 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  uVar4 = local_28;
  bVar1 = ((ulong)puVar3 & 1) == 0;
  if (bVar1) {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar4;
    uVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
    puVar3 = PTR___dispatch_main_q_02578680;
    local_50 = uVar4;
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_00104b78;
    local_68 = &DAT_02578e60;
    (*(code *)PTR__objc_retain_02578638)();
    uVar4 = local_50;
    local_60 = uVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = uVar4;
    _dispatch_async(puVar3,&local_80);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  else {
    FUN_001044cc(local_28,local_30);
  }
  local_40 = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

