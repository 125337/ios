// showNumericAlertForKey:title:hint:current:decimals: @ 01ae9a28

/* Function Stack Size: 0x34 bytes */

void WCRefineHomeAvatarStripSettingsViewController::
     showNumericAlertForKey_title_hint_current_decimals_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,double param_6,bool param_7)

{
  bool bVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *local_c0;
  undefined *local_78;
  undefined *local_68;
  char *local_60;
  undefined4 local_54;
  char *local_50;
  byte local_41;
  double local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_41 = (byte)param_7;
  local_40 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_triggerHaptic_026bab98);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  local_50 = pcVar3;
  if (pcVar3 == (char *)0x0) {
    local_54 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingNumericKey__026be4d8,local_28);
    pcVar3 = local_50;
    _objc_alloc();
    uVar2 = local_30;
    puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf_newline_s_
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_initWithTitle_message__0269d260,uVar2);
    local_60 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_showTextFieldWithMaxLen__0269e5e0,8);
    pcVar3 = local_60;
    bVar1 = (local_41 & 1) == 0;
    local_c0 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___0f);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_c0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf___2f);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_c0;
    }
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_setTextFieldDefaultText__0269fd98,local_c0);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_confirmNumericValue_026be4e0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCurrentAlert__026aa348,local_60);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_show_0269d280);
    _objc_storeStrong(&local_60,0);
    local_54 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

