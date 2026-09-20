// FUN_0173446c @ 0173446c

void FUN_0173446c(long param_1,byte param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  cfstringStruct *local_398;
  cfstringStruct *local_380;
  cfstringStruct *local_348;
  cfstringStruct *local_338;
  cfstringStruct *local_328;
  cfstringStruct *local_318;
  uint local_2cc;
  cfstringStruct *local_2c8;
  cfstringStruct *local_2b0;
  cfstringStruct *local_298;
  cfstringStruct *local_278;
  cfstringStruct *local_268;
  cfstringStruct *local_258;
  cfstringStruct *local_248;
  cfstringStruct *local_208;
  cfstringStruct *local_1f0;
  cfstringStruct *local_1d8;
  byte local_1ca;
  byte local_1c9;
  undefined *local_1c8;
  byte local_1ba;
  byte local_1b9;
  cfstringStruct *local_1b8;
  undefined *local_1b0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_198;
  cfstringStruct *local_190;
  int local_184;
  cfstringStruct *local_180;
  long local_178;
  cfstringStruct *local_170;
  byte local_161;
  long local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  undefined *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_a8;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_170 = (cfstringStruct *)0x0;
  local_161 = param_2;
  local_160 = param_1;
  _objc_storeStrong(&local_170,param_3);
  pcVar1 = (cfstringStruct *)(param_1 + 0x40);
  local_178 = param_1;
  _objc_loadWeakRetained();
  local_180 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_184 = 1;
  }
  else {
    FUN_01728bdc();
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_180;
    local_190 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_targetNickname_026b3bc8);
    _objc_retainAutoreleasedReturnValue();
    local_1f0 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_1f0 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = local_1f0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar1 = local_180;
    (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_targetWxid_026b3bd0);
    _objc_retainAutoreleasedReturnValue();
    local_208 = pcVar1;
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_208 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = local_208;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_180;
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    FUN_01728b80(uVar3);
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_wcr_effectiveTargetAccountUsesWe_026b3b90,uVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_WCRefineHelper_026ce000;
    local_1a8 = pcVar1;
    if ((local_161 & 1) == 0) {
      pcVar1 = local_170;
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
      if (pcVar1 == (cfstringStruct *)0x0) {
        local_2c8 = &cf__gw;
      }
      else {
        local_2c8 = local_170;
      }
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = PTR_WCRefineHelper_026ce000;
      local_1b8 = local_2c8;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_hideWeToastAndShowErrorWithText__0269f838,puVar4,
                 *(undefined8 *)(param_1 + 0x28));
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar1 = local_1b8;
      FUN_01735098();
      local_1b9 = (byte)pcVar1;
      local_1c9 = 0;
      local_2cc = 0;
      if (((ulong)pcVar1 & 1) != 0) {
        puVar5 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        local_1c9 = 1;
        local_1c8 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_2cc = (uint)puVar5;
      }
      if ((local_1c9 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_1c8);
      }
      local_1ba = (byte)local_2cc & 1;
      local_1ca = 0;
      if ((local_2cc & 1) != 0) {
        pcVar1 = local_180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_wcr_removeCodeFromWarehouseForTh_026b3c48,
                   *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x38));
        local_1ca = (byte)pcVar1;
      }
      pcVar1 = local_1b8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1d8 = pcVar1;
      if ((local_1ca & 1) != 0) {
        pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar1 = local_1d8;
        local_1d8 = pcVar2;
        (*(code *)PTR__objc_release_02578630)(pcVar1);
      }
      pcVar1 = local_180;
      local_158 = &cf_time;
      local_108 = local_190;
      local_150 = &cf_success;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      local_148 = &cf_theme;
      local_318 = *(cfstringStruct **)(param_1 + 0x30);
      if (local_318 == (cfstringStruct *)0x0) {
        local_318 = &cf___;
      }
      local_f8 = local_318;
      local_140 = &cf_code;
      local_328 = *(cfstringStruct **)(param_1 + 0x38);
      if (local_328 == (cfstringStruct *)0x0) {
        local_328 = &cf___;
      }
      local_f0 = local_328;
      local_138 = &cf_targetWxid;
      local_e8 = local_1a0;
      local_130 = &cf_targetNickname;
      local_e0 = local_198;
      local_128 = &cf_targetAccount;
      if (local_1a8 == (cfstringStruct *)0x0) {
        local_338 = &cf___;
      }
      else {
        local_338 = local_1a8;
      }
      local_d8 = local_338;
      local_120 = &cf_provider;
      local_348 = *(cfstringStruct **)(param_1 + 0x20);
      if (local_348 == (cfstringStruct *)0x0) {
        local_348 = &cf___;
      }
      local_d0 = local_348;
      local_118 = &cf_message;
      local_c8 = local_1d8;
      local_110 = &cf_stockRemoved;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_100 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_1ca & 1);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_c0 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_108,&local_158,10);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_wcr_appendAirDropLog__026b3be0);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      if (((local_1b9 & 1) != 0) && ((local_1ca & 1) == 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_180,PTR_s_wcr_prepareUsedCodeRemovePromptF_026b3d28,
                   *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x30),
                   *(undefined8 *)(param_1 + 0x38));
      }
      local_380 = *(cfstringStruct **)(param_1 + 0x30);
      if (local_380 == (cfstringStruct *)0x0) {
        local_380 = &cf___;
      }
      local_398 = *(cfstringStruct **)(param_1 + 0x38);
      if (local_398 == (cfstringStruct *)0x0) {
        local_398 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_180,PTR_s_wcr_showResultAlertSuccess_theme_026b3c88,0,local_380,local_398,
                 local_1d8);
      _objc_storeStrong(&local_1d8);
      _objc_storeStrong(&local_1b8,0);
      local_184 = 0;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_hideWeToastAndShowDoneWithText_f_0269f848,puVar4,
                 *(undefined8 *)(param_1 + 0x28));
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar5 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      local_1b0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_180,PTR_s_wcr_commitStockRemovalForThemeIn_026b3c78,
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x30),
                 *(undefined8 *)(param_1 + 0x38));
      puVar5 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_themeBoxAirDropSuccessCount_026b3c68);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_1b0,PTR_s_setThemeBoxAirDropSuccessCount__026b3c70,puVar5 + 1);
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_saveConfig_0269e5d0);
      pcVar1 = local_180;
      local_b8 = &cf_time;
      local_70 = local_190;
      local_b0 = &cf_success;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_a8 = &cf_theme;
      local_248 = *(cfstringStruct **)(param_1 + 0x30);
      if (local_248 == (cfstringStruct *)0x0) {
        local_248 = &cf___;
      }
      local_60 = local_248;
      local_a0 = &cf_code;
      local_258 = *(cfstringStruct **)(param_1 + 0x38);
      if (local_258 == (cfstringStruct *)0x0) {
        local_258 = &cf___;
      }
      local_58 = local_258;
      local_98 = &cf_targetWxid;
      local_50 = local_1a0;
      local_90 = &cf_targetNickname;
      local_48 = local_198;
      local_88 = &cf_targetAccount;
      if (local_1a8 == (cfstringStruct *)0x0) {
        local_268 = &cf___;
      }
      else {
        local_268 = local_1a8;
      }
      local_40 = local_268;
      local_80 = &cf_provider;
      local_278 = *(cfstringStruct **)(param_1 + 0x20);
      if (local_278 == (cfstringStruct *)0x0) {
        local_278 = &cf___;
      }
      local_38 = local_278;
      local_78 = &cf_message;
      local_30 = &cf_QQbcbR;
      puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_68 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_b8,9);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_wcr_appendAirDropLog__026b3be0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_180,PTR_s_wcr_tryForwardLinkedMessageRepoF_026b3c80,
                 *(undefined8 *)(param_1 + 0x50),local_1a0);
      local_298 = *(cfstringStruct **)(param_1 + 0x30);
      if (local_298 == (cfstringStruct *)0x0) {
        local_298 = &cf___;
      }
      local_2b0 = *(cfstringStruct **)(param_1 + 0x38);
      if (local_2b0 == (cfstringStruct *)0x0) {
        local_2b0 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_180,PTR_s_wcr_showResultAlertSuccess_theme_026b3c88,1,local_298,local_2b0);
      local_184 = 1;
      _objc_storeStrong(&local_1b0,0);
    }
    _objc_storeStrong(&local_1a8);
    _objc_storeStrong(&local_1a0,0);
    _objc_storeStrong(&local_198,0);
    _objc_storeStrong(&local_190,0);
  }
  _objc_storeStrong(&local_180,0);
  if (local_184 == 0) {
    local_184 = 0;
  }
  _objc_storeStrong(&local_170,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

