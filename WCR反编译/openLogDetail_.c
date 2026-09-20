// openLogDetail: @ 01723870

/* Function Stack Size: 0x18 bytes */

void ThemeBoxAirDropLogViewController::openLogDetail_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  byte local_ac;
  char *local_a0;
  char *local_98;
  undefined *local_90;
  byte local_81;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  byte local_45;
  uint local_44;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  uVar2 = local_38;
  _objc_getAssociatedObject(local_38,&DAT_028e3f7b);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_40 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
    local_44 = 1;
  }
  else {
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_success);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_45 = (byte)uVar4;
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_time)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_017212bc();
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_theme);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_017212bc();
    _objc_retainAutoreleasedReturnValue();
    local_58 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_code)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_017212bc();
    _objc_retainAutoreleasedReturnValue();
    local_60 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_targetWxid);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_017212bc();
    _objc_retainAutoreleasedReturnValue();
    local_68 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_targetAccount);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_017212bc();
    _objc_retainAutoreleasedReturnValue();
    local_70 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_provider);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_017212bc();
    _objc_retainAutoreleasedReturnValue();
    local_78 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_message);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_017212bc();
    _objc_retainAutoreleasedReturnValue();
    local_80 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_stockRemoved);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_ac = 1;
    if ((uVar4 & 1) == 0) {
      uVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_containsString__0269d0b0,&cf__NN_Rd);
      local_ac = (byte)uVar4;
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_81 = local_ac & 1;
    puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
    _objc_retainAutoreleasedReturnValue();
    local_90 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf__g_);
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_appendFormat__0269d148,&cf_nS_);
    }
    puVar3 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf__N_);
    puVar3 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_QQbcx_);
    puVar3 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf__e_);
    uVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
    if ((uVar2 != 0) &&
       (uVar2 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_isEqualToString__0269ccc8,local_68),
       (uVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_appendFormat__0269d148,&cf_vQQ_S_);
    }
    puVar3 = local_90;
    if ((local_45 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_1Y_SV_);
    }
    puVar3 = local_90;
    if (((local_81 & 1) != 0) && ((local_45 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_N__RdQQbcx);
    }
    puVar3 = local_90;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendFormat__0269d148,&cf_e_);
    pcVar5 = "WCUIAlertView";
    _objc_getClass();
    bVar1 = pcVar5 != (char *)0x0;
    local_98 = pcVar5;
    if (bVar1) {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_a0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Y6R,local_28,
                 PTR_s_copyCurrentDetail__026b3b68);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,local_28);
      _objc_setAssociatedObject(local_28,&DAT_028e3f7e,local_90,3);
      (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_show_0269d280);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIPasteboard_026ce040;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIPasteboard_026ce040,PTR_s_generalPasteboard_0269ce70);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__Y6R_);
    }
    local_44 = (uint)!bVar1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

