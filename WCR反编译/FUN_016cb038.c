// FUN_016cb038 @ 016cb038

void FUN_016cb038(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  uint local_124;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  undefined **local_c0;
  undefined8 *local_b8;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined1 auStack_88 [15];
  byte local_79;
  undefined *local_78;
  long local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  long local_48;
  undefined **local_40;
  uint local_38;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar5 = local_28;
  if (((ulong)puVar3 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
    local_38 = 1;
  }
  else {
    ppuVar4 = &local_68;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_016cb540;
    local_50 = &DAT_0257d9b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar5;
    _objc_retainBlock();
    lVar5 = local_28;
    local_40 = ppuVar4;
    FUN_016af464();
    _objc_retainAutoreleasedReturnValue();
    local_79 = 0;
    local_70 = lVar5;
    (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
    local_124 = 0;
    if (lVar5 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_79 = 1;
      local_78 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_124 = (uint)puVar2;
    }
    if ((local_79 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    bVar1 = (local_124 & 1) == 0;
    if (bVar1) {
      FUN_016b0498(local_28,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WN_);
      _objc_initWeak(auStack_88,local_28);
      puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
      local_a8 = 0;
      local_98 = 0x20000000;
      local_94 = 0x20;
      local_90 = 0;
      local_e0 = PTR___NSConcreteStackBlock_02578660;
      local_d8 = 0xc2000000;
      local_d4 = 0;
      local_d0 = FUN_016cd5c4;
      local_c8 = &DAT_02588040;
      local_a0 = &local_a8;
      _objc_copyWeak(auStack_b0,auStack_88);
      ppuVar4 = local_40;
      local_b8 = &local_a8;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = ppuVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,puVar2,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1,
                 &local_e0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
      _objc_storeStrong(&local_c0,0);
      _objc_destroyWeak(auStack_b0);
      __Block_object_dispose(&local_a8,8);
      _objc_destroyWeak(auStack_88);
    }
    else {
      (*(code *)local_40[2])(local_40,local_70);
    }
    local_38 = (uint)!bVar1;
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

