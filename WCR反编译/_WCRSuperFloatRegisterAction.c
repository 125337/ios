// _WCRSuperFloatRegisterAction @ 01617678

void _WCRSuperFloatRegisterAction
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  cfstringStruct *local_1a0;
  cfstringStruct *local_190;
  cfstringStruct *local_180;
  cfstringStruct *local_170;
  cfstringStruct *local_160;
  cfstringStruct *local_150;
  undefined *local_f8;
  cfstringStruct *local_f0;
  undefined4 local_e4;
  long local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
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
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c0,param_1);
  local_c8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_c8,param_2);
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_3);
  local_d8 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d8,param_4);
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_5);
  pcVar1 = local_c0;
  (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0);
  if ((pcVar1 == (cfstringStruct *)0x0) ||
     (pcVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
     pcVar1 = local_c0, pcVar2 == (cfstringStruct *)0x0)) {
    local_e4 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_f0 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = &cf_wcr_sf_reg_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_wcr_sf_reg_,PTR_s_stringByAppendingString__0269d398,local_c0);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_f0;
      local_f0 = pcVar1;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    if (local_e0 != 0) {
      lVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_copy_0269d150);
      lVar4 = lVar3;
      _objc_retainBlock();
      lVar5 = lVar4;
      FUN_01617b78();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      (*(code *)PTR__objc_release_02578630)(lVar3);
    }
    local_b8 = &cf_title;
    if (local_c8 == (cfstringStruct *)0x0) {
      local_150 = &cf___;
    }
    else {
      local_150 = local_c8;
    }
    local_70 = local_150;
    local_b0 = &cf__wcrDefaultTitle;
    if (local_c8 == (cfstringStruct *)0x0) {
      local_160 = &cf___;
    }
    else {
      local_160 = local_c8;
    }
    local_68 = local_160;
    local_a8 = &cf__wcrDefaultIcon;
    if (local_d0 == (cfstringStruct *)0x0) {
      local_170 = &cf_icons_outlined_setting;
    }
    else {
      local_170 = local_d0;
    }
    local_60 = local_170;
    local_a0 = &cf_icon;
    if (local_d0 == (cfstringStruct *)0x0) {
      local_180 = &cf_icons_outlined_setting;
    }
    else {
      local_180 = local_d0;
    }
    local_58 = local_180;
    local_98 = &cf_action;
    local_50 = local_f0;
    local_90 = &cf__wcrEnabled;
    puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
    _objc_retainAutoreleasedReturnValue();
    local_88 = &cf__wcrSource;
    pcVar1 = local_d8;
    local_48 = puVar6;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
    if (pcVar1 == (cfstringStruct *)0x0) {
      local_190 = &cf_lQcS;
    }
    else {
      local_190 = local_d8;
    }
    local_40 = local_190;
    local_80 = &cf__wcrCustomKind;
    local_38 = &cf_registered;
    local_78 = &cf__wcrCustomPayload;
    if (local_c0 == (cfstringStruct *)0x0) {
      local_1a0 = &cf___;
    }
    else {
      local_1a0 = local_c0;
    }
    local_30 = local_1a0;
    puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_70,&local_b8,9);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_f8 = puVar8;
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(puVar6);
    FUN_01617bec(local_f8);
    _WCRSuperFloatNotifySettingsChanged();
    _objc_storeStrong(&local_f8);
    _objc_storeStrong(&local_f0,0);
    local_e4 = 0;
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

