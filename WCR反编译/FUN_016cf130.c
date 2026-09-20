// FUN_016cf130 @ 016cf130

void FUN_016cf130(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  uint local_124;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined **local_c8;
  undefined8 *local_c0;
  undefined1 auStack_b8 [8];
  undefined8 local_b0;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined1 auStack_90 [15];
  byte local_81;
  undefined *local_80;
  ulong local_78;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ulong local_50;
  undefined **local_48;
  ulong local_40;
  uint local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_isEnabled_026a0ef0);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ_T_u_g0Wh_R_);
    local_38 = 1;
  }
  else {
    uVar3 = local_28;
    FUN_016bd240();
    if ((uVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_b);
      local_38 = 1;
    }
    else {
      uVar3 = local_28;
      FUN_016bd4f8();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = &local_70;
      local_70 = PTR___NSConcreteStackBlock_02578660;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_016cf660;
      local_58 = &DAT_0257d9b8;
      local_40 = uVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar3;
      _objc_retainBlock();
      uVar3 = local_28;
      local_48 = ppuVar4;
      FUN_016af464();
      _objc_retainAutoreleasedReturnValue();
      local_81 = 0;
      local_78 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
      local_124 = 0;
      if (uVar3 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_124 = (uint)puVar2;
      }
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      bVar1 = (local_124 & 1) == 0;
      if (bVar1) {
        FUN_016b0498(local_28,1);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ck_WN_h_S_);
        _objc_initWeak(auStack_90,local_28);
        puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
        local_b0 = 0;
        local_a0 = 0x20000000;
        local_9c = 0x20;
        local_98 = 0;
        local_e8 = PTR___NSConcreteStackBlock_02578660;
        local_e0 = 0xc2000000;
        local_dc = 0;
        local_d8 = FUN_016cfc28;
        local_d0 = &DAT_02588040;
        local_a8 = &local_b0;
        _objc_copyWeak(auStack_b8,auStack_90);
        ppuVar4 = local_48;
        local_c0 = &local_b0;
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = ppuVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fe0000000000000,puVar2,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1,
                   &local_e8);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
        _objc_storeStrong(&local_c8,0);
        _objc_destroyWeak(auStack_b8);
        __Block_object_dispose(&local_b0,8);
        _objc_destroyWeak(auStack_90);
      }
      else {
        (*(code *)local_48[2])(local_48,local_78);
      }
      local_38 = (uint)!bVar1;
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_48,0);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

