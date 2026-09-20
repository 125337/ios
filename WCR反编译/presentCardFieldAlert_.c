// presentCardFieldAlert: @ 0180fc54

/* Function Stack Size: 0x18 bytes */

void WCRefineAutoParseLinkSettingsViewController::presentCardFieldAlert_
               (ID param_1,SEL param_2,long_long param_3)

{
  bool bVar1;
  bool bVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  ID IVar5;
  cfstringStruct *local_f0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  char *local_40;
  long_long local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar3 = "WCUIAlertView";
  _objc_getClass();
  if (pcVar3 != (char *)0x0) {
    local_40 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCardFieldEditing__026b5ee8,local_38);
    pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    if (local_38 == 0) {
      local_98 = &cf__INh;
    }
    else {
      local_98 = &cf__INc;
      if (local_38 != 1) {
        local_98 = &cf__IN_b;
      }
    }
    local_48 = pcVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_98;
    local_58 = &cf__bV;
    if (local_38 != 2) {
      local_58 = &cf_YuzzRg_g;
    }
    (*(code *)PTR__objc_retain_02578638)();
    bVar1 = false;
    local_79 = false;
    bVar2 = false;
    if (local_38 == 0) {
      local_b0 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_autoParseLinkCardTitle_026ad988);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_68 = local_b0;
    }
    else {
      bVar2 = local_38 != 1;
      local_b8 = local_48;
      if (bVar2) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_autoParseLinkCardCoverURL_026ad998);
        _objc_retainAutoreleasedReturnValue();
        local_88 = local_b8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_autoParseLinkCardDesc_026ad990);
        _objc_retainAutoreleasedReturnValue();
        local_78 = local_b8;
      }
      local_79 = !bVar2;
      local_b0 = local_b8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_b0;
    if (bVar2) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    if (local_79) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    pcVar3 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCardFieldAlert__026b5ef0);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardFieldAlert_026b5ef8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardFieldAlert_026b5ef8);
    _objc_retainAutoreleasedReturnValue();
    if (local_60 == (cfstringStruct *)0x0) {
      local_f0 = &::cf___;
    }
    else {
      local_f0 = local_60;
    }
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_setTextFieldDefaultText__0269fd98,local_f0);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardFieldAlert_026b5ef8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardFieldAlert_026b5ef8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    IVar5 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_cardFieldAlert_026b5ef8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar5);
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
  }
  return;
}

