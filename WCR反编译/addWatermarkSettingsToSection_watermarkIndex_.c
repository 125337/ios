// addWatermarkSettingsToSection:watermarkIndex: @ 017edf94

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineAssistFunctionViewController::addWatermarkSettingsToSection_watermarkIndex_
          (WCRefineAssistFunctionViewController *this,ID param_1,SEL param_2,ID param_3,
          long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  char *pcVar4;
  float in_s0;
  char *local_f0;
  undefined *local_e8;
  char *local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined *local_c8;
  ID local_c0;
  undefined *local_b8;
  undefined *local_b0;
  char *local_a8;
  undefined *local_a0;
  undefined *local_98;
  double local_90;
  undefined *local_88;
  undefined *local_80;
  cfstringStruct *local_78;
  byte local_69;
  undefined *local_68;
  undefined *local_60;
  long_long local_58;
  undefined8 local_50;
  SEL local_48;
  ID local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  local_48 = param_2;
  local_40 = param_1;
  _objc_storeStrong(&local_50,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_58 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_60 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_screenshotWatermark_ldEnabled);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_60;
  local_68 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_69 = (byte)puVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = &::cf___;
  if (local_58 == 1) {
    _objc_storeStrong(0,&local_78,&cf_mRUSB_4lpS);
  }
  else if (local_58 == 2) {
    _objc_storeStrong(0,&local_78,&cf_mRSB_4lpS);
  }
  else if (local_58 == 3) {
    _objc_storeStrong(0,&local_78,&cf_mRNB_4lpS);
  }
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_switchCellWithSel_target_title_s_026aa260,
             PTR_s_toggleWatermarkEnabled__026b5818,local_40,local_78,local_69 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = &cf_WCRefineWatermarkIndex;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_80 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_58);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_30 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_dictionaryWithObjects_forKeys_co_0269d528
             ,&local_30,&local_38,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setUserInfo__026a17c8);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,local_80);
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_addScreenshotWatermarkSelectionC_026b5680,local_50,local_58);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_screenshotWatermark_ldOpacity);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_60;
    local_88 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,puVar1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_90 = (double)in_s0;
    if ((double)in_s0 <= 0.0) {
      local_90 = 0.15;
    }
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_98 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_openWatermarkOpacitySetting_ld);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    pcVar4 = "WCTableViewNormalCellManager";
    local_a0 = puVar1;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,pcVar4);
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_screenshotWatermark_ldBlendMode);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = local_60;
    local_b0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_valueForKey__0269d128,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    IVar3 = local_40;
    local_b8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_blendModeNameForValue__026b5690,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_c0 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_openWatermarkBlendModeSetting_ld);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar4 = "WCTableViewNormalCellManager";
    local_c8 = puVar2;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_d0 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,pcVar4);
    IVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_hasScreenshotWatermarkAssetForIn_026b56a0,local_58);
    if ((IVar3 & 1) != 0) {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_openWatermarkPositionEditor_ld);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      _NSSelectorFromString();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      pcVar4 = "WCTableViewNormalCellManager";
      local_d8 = puVar2;
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_e0 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,pcVar4);
      IVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_hasScreenshotWatermarkIndependen_026b56b0,local_58);
      if ((IVar3 & 1) != 0) {
        puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf_openNightWatermarkPositionEditor_ld);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        _NSSelectorFromString();
        (*(code *)PTR__objc_release_02578630)(puVar1);
        pcVar4 = "WCTableViewNormalCellManager";
        local_e8 = puVar2;
        _objc_getClass();
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_f0 = pcVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,pcVar4);
        _objc_storeStrong(&local_f0,0);
      }
      _objc_storeStrong(&local_e0,0);
    }
    _objc_storeStrong(&local_d0);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_a8,0);
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_80);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

