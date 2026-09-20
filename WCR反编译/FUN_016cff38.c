// FUN_016cff38 @ 016cff38

void FUN_016cff38(undefined8 param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  uint local_bc;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_98;
  undefined *local_90;
  undefined8 *local_88;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 *local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined1 auStack_58 [8];
  uint local_50;
  byte local_49;
  undefined *local_48;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  lVar2 = local_28;
  FUN_016af464();
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  local_bc = 0;
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_bc = (uint)puVar3;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  bVar1 = (local_bc & 1) == 0;
  if (bVar1) {
    FUN_016b0498(local_28,1);
    FUN_016abf68(&cf_ck_WN_eN_);
    _objc_initWeak(auStack_58,local_28);
    puVar3 = PTR__OBJC_CLASS___NSTimer_026ce210;
    local_78 = 0;
    local_68 = 0x20000000;
    local_64 = 0x20;
    local_60 = 0;
    local_a8 = PTR___NSConcreteStackBlock_02578660;
    local_a0 = 0xc2000000;
    local_9c = 0;
    local_98 = FUN_016d0c5c;
    local_90 = &DAT_02588220;
    local_70 = &local_78;
    _objc_copyWeak(auStack_80,auStack_58);
    local_88 = &local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe0000000000000,puVar3,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1,&local_a8
              );
    _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
    _objc_destroyWeak(auStack_80);
    __Block_object_dispose(&local_78,8);
    _objc_destroyWeak(auStack_58);
  }
  else {
    FUN_016d026c(local_28,local_30);
  }
  local_50 = (uint)!bVar1;
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

