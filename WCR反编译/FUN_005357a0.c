// FUN_005357a0 @ 005357a0

void FUN_005357a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  dispatch_time_t dVar7;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  ulong local_60;
  ulong local_58;
  ulong local_50;
  byte local_41;
  undefined4 local_40;
  long local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  if ((local_28 == 0) ||
     (lVar3 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     uVar2 = local_28, lVar3 == 0)) {
    local_40 = 1;
  }
  else {
    local_41 = 0;
    (*(code *)PTR__objc_retain_02578638)();
    _objc_sync_enter(uVar2);
    uVar4 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026f4350);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar4;
    FUN_00535f50(uVar4,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar4;
    _objc_setAssociatedObject(local_28,DAT_026f4350,uVar4,1);
    uVar5 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026f4358);
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_boolValue_026ca540);
    uVar4 = local_28;
    uVar1 = DAT_026f4358;
    if ((uVar5 & 1) == 0) {
      puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar4,uVar1,puVar6,1);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_41 = 1;
    }
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_sync_exit(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((local_41 & 1) == 0) {
      local_40 = 1;
    }
    else {
      _objc_initWeak(auStack_68,local_28);
      dVar7 = _dispatch_time(0,80000000);
      puVar6 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_90 = PTR___NSConcreteStackBlock_02578660;
      local_88 = 0xc2000000;
      local_84 = 0;
      local_80 = FUN_005367f4;
      local_78 = &DAT_02578da0;
      _objc_copyWeak(auStack_70,auStack_68);
      _dispatch_after(dVar7,puVar6,&local_90);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      _objc_destroyWeak(auStack_70);
      _objc_destroyWeak(auStack_68);
      local_40 = 0;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

