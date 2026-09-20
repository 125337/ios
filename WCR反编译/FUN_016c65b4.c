// FUN_016c65b4 @ 016c65b4

void FUN_016c65b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined **ppuVar4;
  ulong uVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *pcVar7;
  uint local_16c;
  undefined *local_120;
  undefined4 local_118;
  undefined4 local_114;
  code *local_110;
  undefined *local_108;
  undefined **local_100;
  undefined8 *local_f8;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined1 auStack_c8 [8];
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  ulong local_98;
  ulong local_90;
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
  undefined4 local_38;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
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
    local_60 = FUN_016c7020;
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
    local_16c = 0;
    if (uVar3 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_81 = 1;
      local_80 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_16c = (uint)puVar1;
    }
    if ((local_81 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_16c & 1) == 0) {
      uVar3 = local_28;
      FUN_016aa360();
      _objc_retainAutoreleasedReturnValue();
      local_90 = uVar3;
      if (uVar3 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSeNOo_);
        local_38 = 1;
      }
      else {
        local_98 = 0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFromUsr_0269d088);
        if ((uVar3 & 1) != 0) {
          uVar5 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_nsFromUsr_0269d088);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_98;
          local_98 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        if (((local_98 == 0) ||
            (uVar3 = local_98, (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0)
            , uVar3 == 0)) &&
           (uVar3 = local_90,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsToUsr_0269d090),
           (uVar3 & 1) != 0)) {
          uVar5 = local_90;
          (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_nsToUsr_0269d090);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_98;
          local_98 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elS_u7bOo_);
          local_38 = 1;
        }
        else {
          pcVar6 = &cf_MsgFileDetailLogicController;
          _NSClassFromString();
          pcVar7 = &cf_initWithMsgWrap_userName_;
          local_b0 = pcVar6;
          _NSSelectorFromString();
          local_b8 = pcVar7;
          if ((local_b0 == (cfstringStruct *)0x0) ||
             (pcVar6 = local_b0,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_b0,PTR_s_instancesRespondToSelector__0269da90,pcVar7),
             ((ulong)pcVar6 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_1Y___N_ec);
            local_38 = 1;
          }
          else {
            pcVar6 = local_b0;
            _objc_alloc();
            pcVar7 = pcVar6;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar6,local_b8,local_90,local_98);
            _objc_retainAutoreleasedReturnValue();
            local_c0 = pcVar7;
            (*(code *)PTR__objc_release_02578630)(pcVar6);
            if (local_c0 == (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N_1Y_);
              local_38 = 1;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                         &cf_ck_WN_W_SOeN_);
              pcVar6 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_respondsToSelector__026ca818,
                         PTR_s_startDownloadAppMsgUploading_0269dab8);
              if (((ulong)pcVar6 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_c0,PTR_s_startDownloadAppMsgUploading_0269dab8);
              }
              pcVar6 = local_c0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_c0,PTR_s_respondsToSelector__026ca818,PTR_s_startDownload_0269dac0);
              if (((ulong)pcVar6 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_startDownload_0269dac0);
              }
              _objc_initWeak(auStack_c8,local_28);
              puVar1 = PTR__OBJC_CLASS___NSTimer_026ce210;
              local_e8 = 0;
              local_d8 = 0x20000000;
              local_d4 = 0x20;
              local_d0 = 0;
              local_120 = PTR___NSConcreteStackBlock_02578660;
              local_118 = 0xc2000000;
              local_114 = 0;
              local_110 = FUN_016c834c;
              local_108 = &DAT_02588040;
              local_e0 = &local_e8;
              _objc_copyWeak(auStack_f0,auStack_c8);
              ppuVar4 = local_48;
              local_f8 = &local_e8;
              (*(code *)PTR__objc_retain_02578638)();
              local_100 = ppuVar4;
              (*(code *)PTR__objc_msgSend_02578628)
                        (0x3fe0000000000000,puVar1,PTR_s_scheduledTimerWithTimeInterval_r_026ca840,1
                         ,&local_120);
              _objc_unsafeClaimAutoreleasedReturnValue(puVar1);
              _objc_storeStrong(&local_100,0);
              _objc_destroyWeak(auStack_f0);
              __Block_object_dispose(&local_e8,8);
              _objc_destroyWeak(auStack_c8);
              local_38 = 0;
            }
            _objc_storeStrong(&local_c0,0);
          }
        }
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      (*(code *)local_48[2])(local_48,local_78);
      local_38 = 1;
    }
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

