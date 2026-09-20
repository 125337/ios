// FUN_0016e47c @ 0016e47c

/* WARNING: Type propagation algorithm not settling */

void FUN_0016e47c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  ulong uVar7;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2b0;
  ulong local_270;
  undefined *local_228;
  undefined4 local_220;
  undefined4 local_21c;
  code *local_218;
  undefined *local_210;
  ulong *local_208;
  undefined8 *local_200;
  undefined1 auStack_1f8 [8];
  undefined8 local_1f0;
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  code *local_1d8;
  code *local_1d0;
  ulong local_1c8 [2];
  ulong *local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined1 auStack_1a0 [8];
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  cfstringStruct *local_188;
  ulong local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined4 local_15c;
  code *local_158;
  undefined *local_150;
  undefined8 *local_148;
  undefined8 *local_140;
  undefined1 auStack_138 [8];
  undefined8 local_130;
  undefined8 *local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 *local_108;
  undefined4 local_100;
  undefined4 local_fc;
  code *local_f8;
  code *local_f0;
  ulong local_e8;
  undefined1 auStack_e0 [8];
  cfstringStruct *local_d8;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  bool local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  int local_80;
  byte local_79;
  ulong local_78;
  ulong local_70;
  undefined8 local_68;
  long local_60;
  ulong local_58 [3];
  undefined *local_40;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  local_58[0] = 0;
  local_68 = 0;
  lVar3 = local_28;
  local_40 = puVar2;
  FUN_0016fdac(local_28,&local_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_58,local_68);
  local_79 = 0;
  uVar7 = local_58[0];
  local_60 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_length_0269cca0);
  if (uVar7 == 0) {
    local_270 = local_38;
    FUN_001704fc(0);
    _objc_retainAutoreleasedReturnValue();
    local_79 = 1;
    local_78 = local_270;
  }
  else {
    local_270 = local_58[0];
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_270;
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  uVar4 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  uVar7 = 0;
  if (uVar4 != 0) {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_fileExistsAtPath__026ca630,local_70);
    uVar7 = (ulong)puVar2 & 0xffffffff;
    if (((ulong)puVar2 & 1) != 0) {
      FUN_0016f4d8(local_28,0,local_70);
      local_80 = 1;
      goto LAB_0016f1f0;
    }
  }
  FUN_0016fb00(uVar7,local_28,0,&cf_ck_WN_eN_);
  if (local_60 == 0) {
    local_170 = 0;
    uVar7 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFromUsr_0269d088);
    if ((uVar7 & 1) != 0) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsFromUsr_0269d088);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_170;
      local_170 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    if (((local_170 == 0) ||
        (uVar7 = local_170, (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0),
        uVar7 == 0)) &&
       (uVar7 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsToUsr_0269d090),
       (uVar7 & 1) != 0)) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsToUsr_0269d090);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = local_170;
      local_170 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar7);
    }
    pcVar5 = &cf_MsgFileDetailLogicController;
    _NSClassFromString();
    pcVar6 = &cf_initWithMsgWrap_userName_;
    local_188 = pcVar5;
    _NSSelectorFromString();
    uVar7 = local_170;
    local_190 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
    if (((uVar7 == 0) || (local_188 == (cfstringStruct *)0x0)) ||
       (pcVar5 = local_188,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_188,PTR_s_instancesRespondToSelector__0269da90,local_190),
       ((ulong)pcVar5 & 1) == 0)) {
      FUN_0016f790(local_28,0,&cf_N_1Y___N_ec);
      local_80 = 1;
    }
    else {
      pcVar5 = local_188;
      _objc_alloc();
      pcVar6 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar5,local_190,local_38,local_170);
      _objc_retainAutoreleasedReturnValue();
      local_198 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      if (local_198 == (cfstringStruct *)0x0) {
        FUN_0016f790(local_28,0,&cf_N_1Y_elR_N_c6RhV);
        local_80 = 1;
      }
      else {
        pcVar5 = local_198;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_respondsToSelector__026ca818,
                   PTR_s_startDownloadAppMsgUploading_0269dab8);
        if (((ulong)pcVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_198,PTR_s_startDownloadAppMsgUploading_0269dab8);
        }
        pcVar5 = local_198;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_198,PTR_s_respondsToSelector__026ca818,PTR_s_startDownload_0269dac0);
        if (((ulong)pcVar5 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_startDownload_0269dac0);
        }
        _objc_initWeak(auStack_1a0,local_28);
        uVar7 = local_38;
        local_1c8[1] = 0;
        local_1b0 = 0x20000000;
        local_1ac = 0x20;
        local_1a8 = 0;
        local_1f0 = 0;
        local_1e0 = 0x32000000;
        local_1dc = 0x30;
        local_1d8 = FUN_00170958;
        local_1d0 = FUN_001709ac;
        local_1e8 = &local_1f0;
        local_1b8 = local_1c8 + 1;
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
        local_1c8[0] = uVar7;
        local_228 = PTR___NSConcreteStackBlock_02578660;
        local_220 = 0xc2000000;
        local_21c = 0;
        local_218 = FUN_00170e28;
        local_210 = &DAT_0257a850;
        _objc_copyWeak(auStack_1f8,auStack_1a0);
        local_208 = local_1c8 + 1;
        local_200 = &local_1f0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x3fe0000000000000,puVar2,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1,
                   &local_228);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
        _objc_destroyWeak(auStack_1f8);
        __Block_object_dispose(&local_1f0,8);
        _objc_storeStrong(local_1c8,0);
        __Block_object_dispose(local_1c8 + 1,8);
        _objc_destroyWeak(auStack_1a0);
        local_80 = 0;
      }
      _objc_storeStrong(&local_198,0);
    }
    _objc_storeStrong(&local_170,0);
  }
  else {
    pcVar5 = &cf_MMServiceCenter;
    _NSClassFromString();
    pcVar6 = &cf_CMessageMgr;
    local_88 = pcVar5;
    _NSClassFromString();
    local_a1 = false;
    bVar1 = local_88 == (cfstringStruct *)0x0;
    local_90 = pcVar6;
    if (bVar1) {
      local_2b0 = (cfstringStruct *)0x0;
    }
    else {
      local_2b0 = local_88;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = local_2b0;
    }
    local_a1 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = local_2b0;
    if ((local_a1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    local_b9 = 0;
    if ((local_98 == (cfstringStruct *)0x0) ||
       (pcVar5 = local_98,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
       ((ulong)pcVar5 & 1) == 0)) {
      local_2d0 = (cfstringStruct *)0x0;
    }
    else {
      local_2d0 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_getService__0269d170,local_90);
      _objc_retainAutoreleasedReturnValue();
      local_b9 = 1;
      local_b8 = local_2d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = local_2d0;
    if ((local_b9 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_b8);
    }
    local_c8 = (cfstringStruct *)0x0;
    pcVar6 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_valueForKey__0269d128,&cf_m_oRecordDownloadCDNMgr);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = local_c8;
    local_c8 = pcVar6;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    pcVar5 = &cf_tryDownloadRecordData_;
    _NSSelectorFromString();
    local_d8 = pcVar5;
    if ((local_c8 == (cfstringStruct *)0x0) ||
       (pcVar6 = local_c8,
       (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,pcVar5),
       ((ulong)pcVar6 & 1) == 0)) {
      FUN_0016f790(local_28,0,&cf_N_1Y_elSN__thV);
      local_80 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,local_d8,local_60);
      _objc_initWeak(auStack_e0,local_28);
      uVar7 = local_58[0];
      local_110 = 0;
      local_100 = 0x32000000;
      local_fc = 0x30;
      local_f8 = FUN_00170958;
      local_f0 = FUN_001709ac;
      local_108 = &local_110;
      (*(code *)PTR__objc_retain_02578638)();
      puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
      local_e8 = uVar7;
      local_130 = 0;
      local_120 = 0x20000000;
      local_11c = 0x20;
      local_118 = 0;
      local_168 = PTR___NSConcreteStackBlock_02578660;
      local_160 = 0xc2000000;
      local_15c = 0;
      local_158 = FUN_001709d8;
      local_150 = &DAT_0257a850;
      local_128 = &local_130;
      _objc_copyWeak(auStack_138,auStack_e0);
      local_148 = &local_130;
      local_140 = &local_110;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,puVar2,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1,
                 &local_168);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar2);
      local_80 = 1;
      _objc_destroyWeak(auStack_138);
      __Block_object_dispose(&local_130,8);
      __Block_object_dispose(&local_110,8);
      _objc_storeStrong(&local_e8,0);
      _objc_destroyWeak(auStack_e0);
    }
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_98,0);
  }
LAB_0016f1f0:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(local_58,0);
  _objc_storeStrong(&local_40,0);
  if (local_80 == 0) {
    local_80 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

