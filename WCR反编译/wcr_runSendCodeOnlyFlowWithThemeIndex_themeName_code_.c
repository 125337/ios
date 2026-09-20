// wcr_runSendCodeOnlyFlowWithThemeIndex:themeName:code: @ 0172ed88

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x28 bytes */

void ThemeBoxAirDropThemePickViewController::wcr_runSendCodeOnlyFlowWithThemeIndex_themeName_code_
               (ID param_1,SEL param_2,unsigned_long_long param_3,ID param_4,ID param_5)

{
  cfstringStruct *pcVar1;
  long lVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_2a8;
  cfstringStruct *local_240;
  cfstringStruct *local_230;
  cfstringStruct *local_220;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1c8;
  undefined *local_190;
  undefined4 local_188;
  undefined4 local_184;
  code *local_180;
  undefined *local_178;
  undefined *local_170;
  cfstringStruct *local_168;
  undefined1 auStack_160 [8];
  unsigned_long_long local_158;
  undefined1 auStack_150 [8];
  undefined *local_148;
  char *local_140;
  char *local_138;
  cfstringStruct *local_130;
  undefined *local_128;
  undefined *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  undefined4 local_f4;
  long local_f0;
  cfstringStruct *local_e8;
  long local_e0;
  cfstringStruct *local_d8;
  unsigned_long_long local_d0;
  SEL local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  undefined *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  long local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  local_d0 = param_3;
  local_c8 = param_2;
  local_c0 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_d8,param_4);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_5);
  pcVar6 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_targetWxid_026b3bd0);
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = pcVar6;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  local_e8 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(pcVar6);
  lVar2 = local_e0;
  FUN_01725ed0();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = local_e8;
  local_f0 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
  if ((pcVar6 == (cfstringStruct *)0x0) ||
     (lVar2 = local_f0, (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_zzbSpe_8_);
    local_f4 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = local_c0;
    local_100 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_targetNickname_026b3bc8);
    _objc_retainAutoreleasedReturnValue();
    local_1c8 = pcVar6;
    if (pcVar6 == (cfstringStruct *)0x0) {
      local_1c8 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_108 = local_1c8;
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    pcVar6 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_wcr_currentStockRepository_026b3bf0);
    local_110 = pcVar6;
    FUN_01729b1c();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_100;
    local_118 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_100,PTR_s_themeBoxAirDropSendCodeFormatFor_026b3c50,local_110);
    _objc_retainAutoreleasedReturnValue();
    local_1e8 = local_d8;
    if (local_d8 == (cfstringStruct *)0x0) {
      local_1e8 = &::cf___;
    }
    local_120 = puVar3;
    FUN_0172f6e4(puVar3,local_1e8,local_f0,local_108,local_e8,local_118);
    _objc_retainAutoreleasedReturnValue();
    pcVar6 = local_c0;
    pcVar1 = local_110;
    local_128 = puVar3;
    FUN_0172fb14(local_110);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar6,PTR_s_wcr_effectiveTargetAccountUsesWe_026b3b90,pcVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_130 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_isWeChatFriendUserName__026af090,local_e8);
    if (((ulong)puVar3 & 1) == 0) {
      pcVar4 = "WCUIAlertView";
      _objc_getClass();
      local_138 = pcVar4;
      if (pcVar4 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___YSelS);
      }
      else {
        _objc_alloc();
        (*(code *)PTR__objc_msgSend_02578628)();
        local_140 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,0);
        (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_show_0269d280);
        _objc_storeStrong(&local_140,0);
      }
      local_f4 = 1;
    }
    else {
      puVar3 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_themeBoxAirDropTotalCount_026b3c58);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_setThemeBoxAirDropTotalCount__026b3c60,puVar3 + 1);
      puVar3 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_themeBoxAirDropSuccessCount_026b3c68);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_setThemeBoxAirDropSuccessCount__026b3c70,puVar3 + 1);
      puVar3 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_saveConfig_0269e5d0);
      FUN_01728bdc();
      _objc_retainAutoreleasedReturnValue();
      local_148 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_wcr_commitStockRemovalForThemeIn_026b3c78,local_d0,local_d8,local_f0
                );
      pcVar6 = local_c0;
      local_b8 = &cf_time;
      local_70 = local_148;
      local_b0 = &cf_success;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = &cf_theme;
      local_220 = local_d8;
      if (local_d8 == (cfstringStruct *)0x0) {
        local_220 = &::cf___;
      }
      local_60 = local_220;
      local_a0 = &cf_code;
      local_58 = local_f0;
      local_98 = &cf_targetWxid;
      local_50 = local_e8;
      local_90 = &cf_targetNickname;
      local_48 = local_108;
      local_88 = &cf_targetAccount;
      if (local_130 == (cfstringStruct *)0x0) {
        local_230 = &::cf___;
      }
      else {
        local_230 = local_130;
      }
      local_40 = local_230;
      local_80 = &cf_provider;
      local_240 = local_118;
      if (local_118 == (cfstringStruct *)0x0) {
        local_240 = &::cf___;
      }
      local_38 = local_240;
      local_78 = &cf_message;
      local_30 = &cf_SaS__cb_X_;
      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_68 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_b8,9);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_wcr_appendAirDropLog__026b3be0);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_initWeak(auStack_150,local_c0);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_128;
      local_190 = PTR___NSConcreteStackBlock_02578660;
      local_188 = 0xc2000000;
      local_184 = 0;
      local_180 = FUN_0172fb70;
      local_178 = &DAT_02583088;
      (*(code *)PTR__objc_retain_02578638)();
      local_170 = puVar5;
      pcVar6 = local_e8;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = pcVar6;
      _objc_copyWeak(auStack_160,auStack_150);
      local_158 = local_d0;
      _dispatch_async(puVar3,&local_190);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__SaS___e);
      local_2a8 = local_d8;
      if (local_d8 == (cfstringStruct *)0x0) {
        local_2a8 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_wcr_showResultAlertSuccess_theme_026b3c88,1,local_2a8,local_f0,0);
      _objc_destroyWeak(auStack_160);
      _objc_storeStrong(&local_168);
      _objc_storeStrong(&local_170,0);
      _objc_destroyWeak(auStack_150);
      _objc_storeStrong(&local_148,0);
      local_f4 = 0;
    }
    _objc_storeStrong(&local_130);
    _objc_storeStrong(&local_128,0);
    _objc_storeStrong(&local_120,0);
    _objc_storeStrong(&local_118,0);
    _objc_storeStrong(&local_108,0);
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_e0,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

