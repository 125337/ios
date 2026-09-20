// wcr_showResultAlertSuccess:themeName:code:errorMessage: @ 01736230

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x2c bytes */

void ThemeBoxAirDropThemePickViewController::wcr_showResultAlertSuccess_themeName_code_errorMessage_
               (ID param_1,SEL param_2,bool param_3,ID param_4,ID param_5,ID param_6)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  ID IVar4;
  undefined1 *puVar5;
  cfstringStruct *local_258;
  cfstringStruct *local_230;
  cfstringStruct *local_178;
  cfstringStruct *local_168;
  cfstringStruct *local_160;
  uint local_150;
  int local_14c;
  ID local_140;
  ID local_138;
  ID local_130;
  ID local_128;
  char *local_f8;
  undefined4 local_ec;
  byte local_e5;
  undefined1 local_e4;
  byte local_e3;
  byte local_e2;
  byte local_e1;
  undefined *local_e0;
  cfstringStruct *local_d8;
  byte local_c9;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  byte local_b1;
  ID local_b0;
  undefined1 local_a2;
  byte local_a1;
  ID local_a0;
  byte local_91;
  ID local_90;
  ID local_88;
  ID local_80;
  ID local_78;
  ID local_70;
  byte local_61;
  undefined1 *local_60;
  char *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_40 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_50,param_6);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  puVar3 = PTR_WCRefineConfig_026cdf58;
  local_58 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_themeBoxAirDropDeliveryMode_026ad100);
  local_61 = puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 1);
  IVar4 = local_28;
  _objc_getAssociatedObject(local_28,&DAT_028e3f81);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_70 = IVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar4 & 1) == 0) {
    local_130 = local_28;
    if ((local_61 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_currentRedeemProvider_026b3b88);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_currentStockRepository_026b3bf0);
    }
    local_128 = local_130;
  }
  else {
    local_128 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_integerValue_026ca750);
  }
  local_78 = local_128;
  if ((local_61 & 1) == 0) {
    FUN_01728a88();
    local_138 = local_128;
  }
  else {
    FUN_01729a9c();
    local_138 = local_128;
  }
  local_80 = local_138;
  local_91 = 0;
  local_a1 = 0;
  if ((local_61 & 1) == 0) {
    FUN_01728acc();
    _objc_retainAutoreleasedReturnValue();
    local_a1 = 1;
    local_140 = local_138;
    local_a0 = local_138;
  }
  else {
    FUN_01729b1c();
    _objc_retainAutoreleasedReturnValue();
    local_91 = 1;
    local_140 = local_138;
    local_90 = local_138;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_88 = local_140;
  if ((local_a1 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a0);
  }
  if ((local_91 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_61 & 1) == 0) {
    IVar4 = local_80;
    FUN_01728b80();
    local_14c = (int)IVar4;
  }
  else {
    IVar4 = local_80;
    FUN_0172fb14();
    local_14c = (int)IVar4;
  }
  local_a2 = local_14c != 0;
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_targetTitleUsesWechat__026b3cd0,local_a2)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_150 = 0;
  local_b0 = IVar4;
  if ((local_31 & 1) == 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_shouldAskUsedCodeRemove_026b3d78);
    local_150 = (uint)IVar4;
  }
  local_b1 = (byte)local_150 & 1;
  local_c9 = 0;
  if (((local_31 & 1) == 0) && ((local_150 & 1) == 0)) {
    local_178 = local_48;
    if (local_48 == (cfstringStruct *)0x0) {
      local_178 = &::cf___;
    }
    FUN_017296d0();
    _objc_retainAutoreleasedReturnValue();
    local_c9 = 1;
    local_168 = local_178;
    local_c8 = local_178;
  }
  else {
    local_160 = local_48;
    if (local_48 == (cfstringStruct *)0x0) {
      local_160 = &::cf___;
    }
    local_168 = local_160;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = local_168;
  if ((local_c9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_c8);
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_d8 = &::cf___;
  if ((local_31 & 1) == 0) {
    pcVar1 = &cf_S1Y_;
    if ((local_61 & 1) == 0) {
      pcVar1 = &cf_zzb1Y_;
    }
    _objc_storeStrong(&local_d8,pcVar1);
  }
  else {
    pcVar1 = &cf_SbR;
    if ((local_61 & 1) == 0) {
      pcVar1 = &cf_bbR;
    }
    _objc_storeStrong(&local_d8,pcVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf__NT_);
  (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_appendFormat__0269d148,&cf_QQbcx_);
  if ((local_61 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_appendFormat__0269d148,&cf_vQQcN_);
  }
  if ((local_31 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_appendFormat__0269d148,&cf_b__);
  }
  else if ((local_61 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_appendFormat__0269d148,&cf__b__);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_appendFormat__0269d148,&cf__S__);
  }
  if ((local_31 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
    local_230 = local_50;
    if (local_50 == (cfstringStruct *)0x0) {
      local_230 = &cf__gw;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_appendString__0269ccb0,local_230);
  }
  if ((local_b1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
  }
  IVar4 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,local_31 & 1);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(IVar4,&DAT_028e3f82,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  local_258 = local_50;
  if (local_50 == (cfstringStruct *)0x0) {
    local_258 = &::cf___;
  }
  _objc_setAssociatedObject(local_28,&DAT_028e3f83,local_258,3);
  local_e1 = (local_61 ^ 1) & 1;
  puVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_themeBoxAirDropNotifyEnabled_026b3d80);
  local_e2 = (byte)puVar5;
  puVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_themeBoxAirDropNotifyOnFailure_026b3d88);
  local_e3 = (byte)puVar5;
  puVar5 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_themeBoxAirDropSilentNotify_026b3d90);
  local_e4 = SUB81(puVar5,0);
  local_e5 = 0;
  if ((((local_e1 & 1) != 0) && (local_e5 = 0, (local_e2 & 1) != 0)) &&
     (local_e5 = 1, (local_31 & 1) == 0)) {
    local_e5 = local_e3;
  }
  local_e5 = local_e5 & 1;
  if (((ulong)puVar5 & 1) == 0) {
    if (local_58 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_d8);
      if ((local_e5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_dispatchAirDropNotifyFromPen_026b3d98,0);
      }
      if ((local_b1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_wcr_presentUsedCodeRemoveConfirm_026b3da0);
      }
      local_ec = 1;
    }
    else {
      pcVar2 = local_58;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_f8 = pcVar2;
      if ((local_b1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,local_28,0);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_fNRd,local_28,
                   PTR_s_wcr_cancelUsedCodeRemove__026b3d50);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_28,
                   PTR_s_wcr_confirmUsedCodeRemove__026b3d58);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y_Rd,local_28,
                   PTR_s_wcr_alwaysRemoveUsedCode__026b3d60);
      }
      if ((local_e5 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_f8,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sw,local_28,
                   PTR_s_wcr_sendNotifyFromResultAlert__026b3da8);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_show_0269d280);
      _objc_storeStrong(&local_f8,0);
      local_ec = 0;
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_d8);
    if ((local_e5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_dispatchAirDropNotifyFromPen_026b3d98,0);
    }
    if ((local_b1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_wcr_presentUsedCodeRemoveConfirm_026b3da0);
    }
    local_ec = 1;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b0,0);
  _objc_storeStrong(&local_88,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_60,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return;
}

