// editPlusLongPressProtectionSeconds @ 01cb4b38

/* Function Stack Size: 0x10 bytes */

void WCRefinePrivateFriendViewController::editPlusLongPressProtectionSeconds(ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *local_78;
  char *local_48;
  char *local_40;
  char *local_38;
  undefined *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  local_28 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el>f_yeQFh);
  }
  else {
    puVar3 = PTR_WCRefinePrivateFriendManager_026ce160;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePrivateFriendManager_026ce160,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    pcVar2 = local_28;
    local_30 = puVar4;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handlePlusLongPressProtectionSec_026c3218);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_showTextFieldWithMaxLen__0269e5e0,3);
    pcVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    pcVar2 = local_38;
    if (((ulong)pcVar5 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__ld);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setTextFieldDefaultText__0269fd98);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
    bVar1 = ((ulong)pcVar2 & 1) == 0;
    if (bVar1) {
      local_78 = (char *)0x0;
    }
    else {
      local_78 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getTextField_0269fb48);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_78;
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_setKeyboardType__026aec58);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setKeyboardType__026aec58,4);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

