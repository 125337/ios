// FUN_016af7cc @ 016af7cc

void FUN_016af7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  uint local_ec;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined8 *local_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined1 auStack_68 [8];
  undefined4 local_60;
  byte local_59;
  undefined *local_58;
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_28;
  FUN_016af464();
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_40 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  local_ec = 0;
  if (lVar1 != 0) {
    puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_ec = (uint)puVar2;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if ((local_ec & 1) == 0) {
    FUN_016b0498(local_28,1);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar1 != 0) {
      FUN_016abf68(local_30);
    }
    _objc_initWeak(auStack_68,local_28);
    puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
    local_88 = 0;
    local_78 = 0x20000000;
    local_74 = 0x20;
    local_70 = 0;
    local_c0 = PTR___NSConcreteStackBlock_02578660;
    local_b8 = 0xc2000000;
    local_b4 = 0;
    local_b0 = FUN_016b0df4;
    local_a8 = &DAT_02588040;
    local_80 = &local_88;
    _objc_copyWeak(auStack_90,auStack_68);
    lVar1 = local_38;
    local_98 = &local_88;
    (*(code *)PTR__objc_retain_02578638)();
    local_a0 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3fe0000000000000,puVar2,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1,&local_c0
              );
    _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
    _objc_storeStrong(&local_a0,0);
    _objc_destroyWeak(auStack_90);
    __Block_object_dispose(&local_88,8);
    _objc_destroyWeak(auStack_68);
    local_60 = 0;
  }
  else {
    if (local_38 != 0) {
      (**(code **)(local_38 + 0x10))(local_38,local_28,local_40);
    }
    local_60 = 1;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

