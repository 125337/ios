// FUN_007765d4 @ 007765d4

void FUN_007765d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  dispatch_time_t dVar9;
  uint local_18c;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined8 *local_118;
  undefined8 *local_110;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  code *local_e0;
  code *local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  cfstringStruct *local_90;
  undefined *local_88;
  cfstringStruct *local_80;
  ulong local_70;
  byte local_61;
  undefined *local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_38 = 0;
  local_30 = param_2;
  _objc_storeStrong(&local_38,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQ);
    local_48 = 1;
  }
  else {
    uVar3 = local_28;
    FUN_00777440();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    FUN_00777630();
    _objc_retainAutoreleasedReturnValue();
    local_61 = 0;
    local_58 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
    local_18c = 0;
    if (uVar3 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
      _objc_retainAutoreleasedReturnValue();
      local_61 = 1;
      local_60 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18c = (uint)puVar1;
    }
    if ((local_61 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    if ((local_18c & 1) == 0) {
      if (local_50 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSeN);
        local_48 = 1;
      }
      else {
        local_70 = 0;
        uVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsFromUsr_0269d088);
        if ((uVar3 & 1) != 0) {
          uVar4 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_m_nsFromUsr_0269d088);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_70;
          local_70 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        if ((uVar3 == 0) &&
           (uVar3 = local_50,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsToUsr_0269d090),
           (uVar3 & 1) != 0)) {
          uVar4 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_m_nsToUsr_0269d090);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = local_70;
          local_70 = uVar4;
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        uVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSOOo_);
          local_48 = 1;
        }
        else {
          pcVar5 = &cf_MsgFileDetailLogicController;
          _NSClassFromString();
          local_80 = pcVar5;
          if (pcVar5 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_N__NNS_u);
            local_48 = 1;
          }
          else {
            puVar1 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastLoadingWithText__0269cea8,
                       &cf_ck_WN__);
            _objc_retainAutoreleasedReturnValue();
            pcVar5 = local_80;
            local_88 = puVar1;
            _objc_alloc_init();
            local_90 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_respondsToSelector__026ca818,PTR_s_setM_nsUsrName__026a7f80);
            if (((ulong)pcVar5 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_90,PTR_s_setM_nsUsrName__026a7f80,local_70);
            }
            pcVar5 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_setM_msgWrap__026a7f88);
            if (((ulong)pcVar5 & 1) != 0) {
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_setM_msgWrap__026a7f88,local_50);
            }
            pcVar6 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_90,PTR_s_respondsToSelector__026ca818,PTR_s_startDownload_0269dac0);
            pcVar5 = local_90;
            if (((ulong)pcVar6 & 1) == 0) {
              pcVar6 = &cf_StartDownload;
              _NSSelectorFromString();
              (*(code *)PTR__objc_msgSend_02578628)
                        (pcVar5,PTR_s_respondsToSelector__026ca818,pcVar6);
              pcVar6 = local_90;
              if (((ulong)pcVar5 & 1) != 0) {
                pcVar5 = &cf_StartDownload;
                _NSSelectorFromString();
                (*(code *)PTR__objc_msgSend_02578628)(pcVar6,pcVar5);
              }
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_startDownload_0269dac0);
            }
            local_b8 = 0;
            local_a8 = 0x20000000;
            local_a4 = 0x20;
            local_a0 = 0;
            local_b0 = &local_b8;
            _objc_initWeak(auStack_c0,local_28);
            _objc_initWeak(auStack_c8,local_50);
            local_f8 = 0;
            local_e8 = 0x32000000;
            local_e4 = 0x30;
            local_e0 = FUN_00777dd4;
            local_d8 = FUN_00777e10;
            local_d0 = 0;
            ppuVar7 = &local_140;
            local_140 = PTR___NSConcreteStackBlock_02578660;
            local_138 = 0xc2000000;
            local_134 = 0;
            local_130 = FUN_00777e3c;
            local_128 = &DAT_0257fc88;
            local_118 = &local_b8;
            local_f0 = &local_f8;
            _objc_copyWeak(auStack_108,auStack_c8);
            puVar1 = local_88;
            (*(code *)PTR__objc_retain_02578638)();
            local_120 = puVar1;
            _objc_copyWeak(auStack_100,auStack_c0);
            local_110 = &local_f8;
            _objc_retainBlock();
            uVar8 = local_f0[5];
            local_f0[5] = ppuVar7;
            (*(code *)PTR__objc_release_02578630)(uVar8);
            dVar9 = _dispatch_time(0,600000000);
            puVar1 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            _dispatch_after(dVar9,puVar1,local_f0[5]);
            (*(code *)PTR__objc_release_02578630)(puVar1);
            __Block_object_dispose(&local_f8,8);
            _objc_storeStrong(&local_d0,0);
            _objc_destroyWeak(auStack_100);
            _objc_storeStrong(&local_120,0);
            _objc_destroyWeak(auStack_108);
            _objc_destroyWeak(auStack_c8);
            _objc_destroyWeak(auStack_c0);
            __Block_object_dispose(&local_b8,8);
            _objc_storeStrong(&local_90,0);
            _objc_storeStrong(&local_88,0);
            local_48 = 0;
          }
        }
        _objc_storeStrong(&local_70,0);
      }
    }
    else {
      FUN_00777b3c(local_58);
      local_48 = 1;
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

