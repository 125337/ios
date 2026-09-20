// FUN_00096224 @ 00096224

void FUN_00096224(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_2d0;
  cfstringStruct *local_2b0;
  uint local_27c;
  ulong local_260;
  undefined *local_218;
  undefined4 local_210;
  undefined4 local_20c;
  code *local_208;
  undefined *local_200;
  ulong local_1f8;
  undefined8 *local_1f0;
  undefined1 auStack_1e8 [8];
  undefined8 local_1e0;
  undefined8 *local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [8];
  cfstringStruct *local_1b8;
  cfstringStruct *local_1b0;
  cfstringStruct *local_1a8;
  ulong local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  ulong local_168;
  undefined8 *local_160;
  undefined8 *local_158;
  undefined1 auStack_150 [8];
  undefined8 local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  code *local_108;
  ulong local_100;
  undefined1 auStack_f8 [8];
  cfstringStruct *local_f0;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  bool local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  byte local_91;
  undefined *local_90;
  byte local_81;
  ulong local_80;
  ulong local_78;
  undefined8 local_70;
  ulong local_68;
  ulong local_60;
  int local_54;
  ulong local_50 [3];
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar2 = local_28;
  FUN_000979c4();
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = uVar2;
  if (uVar2 == 0) {
    FUN_0009792c(local_28,0,&cf_elSeNOo_);
    local_54 = 1;
  }
  else {
    local_60 = 0;
    local_70 = 0;
    uVar2 = local_28;
    FUN_00097b88(local_28,&local_70);
    _objc_retainAutoreleasedReturnValue();
    _objc_storeStrong(&local_60,local_70);
    local_81 = 0;
    uVar3 = local_60;
    local_68 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    if (uVar3 == 0) {
      local_260 = local_50[0];
      FUN_000981a4(0);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = local_260;
    }
    else {
      local_260 = local_60;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_260;
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    local_91 = 0;
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    local_27c = 0;
    if (uVar2 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_91 = 1;
      local_90 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_27c = (uint)puVar4;
    }
    if ((local_91 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_90);
    }
    if ((local_27c & 1) == 0) {
      FUN_0009792c(local_28,0,&cf_ck_WN_eN_);
      if (local_68 == 0) {
        local_190 = 0;
        uVar2 = local_50[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50[0],PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFromUsr_0269d088);
        if ((uVar2 & 1) != 0) {
          uVar3 = local_50[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_m_nsFromUsr_0269d088);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_190;
          local_190 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        if (((local_190 == 0) ||
            (uVar2 = local_190,
            (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0), uVar2 == 0)) &&
           (uVar2 = local_50[0],
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50[0],PTR_s_respondsToSelector__026ca818,PTR_s_m_nsToUsr_0269d090),
           (uVar2 & 1) != 0)) {
          uVar3 = local_50[0];
          (*(code *)PTR__objc_msgSend_02578628)(local_50[0],PTR_s_m_nsToUsr_0269d090);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = local_190;
          local_190 = uVar3;
          (*(code *)PTR__objc_release_02578630)(uVar2);
        }
        uVar2 = local_190;
        (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_length_0269cca0);
        if (uVar2 == 0) {
          FUN_0009792c(local_28,0,&cf_elS_u7bOo_);
          local_54 = 1;
        }
        else {
          pcVar5 = &cf_MsgFileDetailLogicController;
          _NSClassFromString();
          pcVar6 = &cf_initWithMsgWrap_userName_;
          local_1a8 = pcVar5;
          _NSSelectorFromString();
          local_1b0 = pcVar6;
          if ((local_1a8 == (cfstringStruct *)0x0) ||
             (pcVar5 = local_1a8,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_1a8,PTR_s_instancesRespondToSelector__0269da90,pcVar6),
             ((ulong)pcVar5 & 1) == 0)) {
            FUN_0009792c(local_28,0,&cf_N_1Y___N_ec);
            local_54 = 1;
          }
          else {
            pcVar5 = local_1a8;
            _objc_alloc();
            pcVar6 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar5,local_1b0,local_50[0],local_190);
            _objc_retainAutoreleasedReturnValue();
            local_1b8 = pcVar6;
            (*(code *)PTR__objc_release_02578630)(pcVar5);
            if (local_1b8 == (cfstringStruct *)0x0) {
              FUN_0009792c(local_28,0,&cf_N_1Y_);
              local_54 = 1;
            }
            else {
              pcVar5 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_respondsToSelector__026ca818,
                         PTR_s_startDownloadAppMsgUploading_0269dab8);
              if (((ulong)pcVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1b8,PTR_s_startDownloadAppMsgUploading_0269dab8);
              }
              pcVar5 = local_1b8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_1b8,PTR_s_respondsToSelector__026ca818,PTR_s_startDownload_0269dac0);
              if (((ulong)pcVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_1b8,PTR_s_startDownload_0269dac0);
              }
              _objc_initWeak(auStack_1c0,local_28);
              puVar4 = PTR__OBJC_CLASS___NSTimer_026ce210;
              local_1e0 = 0;
              local_1d0 = 0x20000000;
              local_1cc = 0x20;
              local_1c8 = 0;
              local_218 = PTR___NSConcreteStackBlock_02578660;
              local_210 = 0xc2000000;
              local_20c = 0;
              local_208 = FUN_000988b0;
              local_200 = &DAT_02579c30;
              local_1d8 = &local_1e0;
              _objc_copyWeak(auStack_1e8,auStack_1c0);
              uVar2 = local_50[0];
              local_1f0 = &local_1e0;
              (*(code *)PTR__objc_retain_02578638)();
              local_1f8 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3fe0000000000000,puVar4,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1
                         ,&local_218);
              _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
              _objc_storeStrong(&local_1f8,0);
              _objc_destroyWeak(auStack_1e8);
              __Block_object_dispose(&local_1e0,8);
              _objc_destroyWeak(auStack_1c0);
              local_54 = 0;
            }
            _objc_storeStrong(&local_1b8,0);
          }
        }
        _objc_storeStrong(&local_190,0);
      }
      else {
        pcVar5 = &cf_MMServiceCenter;
        _NSClassFromString();
        pcVar6 = &cf_CMessageMgr;
        local_a0 = pcVar5;
        _NSClassFromString();
        local_b9 = false;
        bVar1 = local_a0 == (cfstringStruct *)0x0;
        local_a8 = pcVar6;
        if (bVar1) {
          local_2b0 = (cfstringStruct *)0x0;
        }
        else {
          local_2b0 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_defaultCenter_026ca5e0);
          _objc_retainAutoreleasedReturnValue();
          local_b8 = local_2b0;
        }
        local_b9 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = local_2b0;
        if ((local_b9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_b8);
        }
        local_d1 = 0;
        if ((local_b0 == (cfstringStruct *)0x0) ||
           (pcVar5 = local_b0,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_b0,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
           ((ulong)pcVar5 & 1) == 0)) {
          local_2d0 = (cfstringStruct *)0x0;
        }
        else {
          local_2d0 = local_b0;
          (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_getService__0269d170,local_a8);
          _objc_retainAutoreleasedReturnValue();
          local_d1 = 1;
          local_d0 = local_2d0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_c8 = local_2d0;
        if ((local_d1 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d0);
        }
        local_e0 = (cfstringStruct *)0x0;
        pcVar6 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_valueForKey__0269d128,&cf_m_oRecordDownloadCDNMgr);
        _objc_retainAutoreleasedReturnValue();
        pcVar5 = local_e0;
        local_e0 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        pcVar5 = &cf_tryDownloadRecordData_;
        _NSSelectorFromString();
        local_f0 = pcVar5;
        if ((local_e0 == (cfstringStruct *)0x0) ||
           (pcVar6 = local_e0,
           (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,pcVar5)
           , ((ulong)pcVar6 & 1) == 0)) {
          FUN_0009792c(local_28,0,&cf_N_1Y_);
          local_54 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_f0,local_68);
          _objc_initWeak(auStack_f8,local_28);
          uVar2 = local_78;
          local_128 = 0;
          local_118 = 0x32000000;
          local_114 = 0x30;
          local_110 = FUN_00098478;
          local_108 = FUN_000984cc;
          local_120 = &local_128;
          (*(code *)PTR__objc_retain_02578638)();
          puVar4 = PTR__OBJC_CLASS___NSTimer_026ce210;
          local_100 = uVar2;
          local_148 = 0;
          local_138 = 0x20000000;
          local_134 = 0x20;
          local_130 = 0;
          local_188 = PTR___NSConcreteStackBlock_02578660;
          local_180 = 0xc2000000;
          local_17c = 0;
          local_178 = FUN_000984f8;
          local_170 = &DAT_02579c00;
          local_140 = &local_148;
          _objc_copyWeak(auStack_150,auStack_f8);
          uVar2 = local_50[0];
          local_160 = &local_148;
          local_158 = &local_128;
          (*(code *)PTR__objc_retain_02578638)();
          local_168 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0x3fe0000000000000,puVar4,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1,
                     &local_188);
          _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
          local_54 = 1;
          _objc_storeStrong(&local_168);
          _objc_destroyWeak(auStack_150);
          __Block_object_dispose(&local_148,8);
          __Block_object_dispose(&local_128,8);
          _objc_storeStrong(&local_100,0);
          _objc_destroyWeak(auStack_f8);
        }
        _objc_storeStrong(&local_e0);
        _objc_storeStrong(&local_c8,0);
        _objc_storeStrong(&local_b0,0);
      }
    }
    else {
      FUN_00097344(local_28,0,local_50[0],local_78);
      local_54 = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(local_50,0);
  if (local_54 == 0) {
    local_54 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

