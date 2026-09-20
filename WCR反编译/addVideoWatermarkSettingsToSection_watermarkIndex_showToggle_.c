// addVideoWatermarkSettingsToSection:watermarkIndex:showToggle: @ 017ee87c

/* Function Stack Size: 0x24 bytes */

void __thiscall
WCRefineAssistFunctionViewController::addVideoWatermarkSettingsToSection_watermarkIndex_showToggle_
          (WCRefineAssistFunctionViewController *this,ID param_1,SEL param_2,ID param_3,
          long_long param_4,bool param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  char *pcVar4;
  float in_s0;
  int local_11c;
  char *local_108;
  undefined *local_100;
  char *local_f8;
  undefined *local_f0;
  ID local_e8;
  undefined *local_e0;
  undefined *local_d8;
  char *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  double local_b8;
  undefined *local_b0;
  char *local_a8;
  uint local_9c;
  undefined *local_98;
  cfstringStruct *local_90;
  byte local_81;
  undefined *local_80;
  byte local_71;
  undefined *local_70;
  undefined *local_68;
  byte local_59;
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
  local_59 = (byte)param_5;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_58 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_68 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_videoWatermark_ldEnabled);
  _objc_retainAutoreleasedReturnValue();
  local_81 = 0;
  local_70 = puVar2;
  if ((local_59 & 1) == 0) {
    local_11c = 1;
  }
  else {
    puVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_valueForKey__0269d128,puVar2);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11c = (int)puVar1;
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  local_71 = local_11c != 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_90 = &::cf___;
  if (local_58 == 1) {
    _objc_storeStrong(0,&local_90,&cf_USB_4lpSn_);
  }
  else if (local_58 == 2) {
    _objc_storeStrong(0,&local_90,&cf_SB_4lpSn_);
  }
  else if (local_58 == 3) {
    _objc_storeStrong(0,&local_90,&cf_NB_4lpSn_);
  }
  if ((local_59 & 1) == 0) {
    pcVar4 = "WCTableViewNormalCellManager";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_a8 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,pcVar4);
    _objc_storeStrong(&local_a8,0);
  }
  else {
    puVar1 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_switchCellWithSel_target_title_s_026aa260,
               PTR_s_toggleVideoWatermarkEnabled__026b5820,local_40,local_90,local_71 & 1);
    _objc_retainAutoreleasedReturnValue();
    local_38 = &cf_WCRefineVideoWatermarkIndex;
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_98 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setUserInfo__026a17c8);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,local_98);
    local_9c = (uint)((local_71 & 1) == 0);
    _objc_storeStrong(&local_98,0);
    if (local_9c != 0) goto LAB_017ef120;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_addVideoWatermarkSelectionCellTo_026b5710,local_50,local_58);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_videoWatermark_ldOpacity);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_68;
  local_b0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_valueForKey__0269d128,puVar1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_b8 = (double)in_s0;
  if ((double)in_s0 <= 0.0) {
    local_b8 = 0.15;
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_openVideoWatermarkOpacitySetting_ld);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  pcVar4 = "WCTableViewNormalCellManager";
  local_c8 = puVar1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_d0 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,pcVar4);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_videoWatermark_ldBlendMode);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_68;
  local_d8 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_valueForKey__0269d128,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  IVar3 = local_40;
  local_e0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_blendModeNameForValue__026b5690,puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_e8 = IVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
             &cf_openVideoWatermarkBlendModeSetting_ld);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _NSSelectorFromString();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar4 = "WCTableViewNormalCellManager";
  local_f0 = puVar2;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_f8 = pcVar4;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,pcVar4);
  IVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_40,PTR_s_hasVideoWatermarkAssetForIndex__026b5728,local_58);
  if ((IVar3 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_openVideoWatermarkPositionEditor_ld);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    _NSSelectorFromString();
    (*(code *)PTR__objc_release_02578630)(puVar1);
    pcVar4 = "WCTableViewNormalCellManager";
    local_100 = puVar2;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_108 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addCell__0269e3f8,pcVar4);
    _objc_storeStrong(&local_108,0);
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b0,0);
  local_9c = 0;
LAB_017ef120:
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

