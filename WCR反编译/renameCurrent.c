// renameCurrent @ 01e1a860

/* Function Stack Size: 0x10 bytes */

void WCRefineSuperFloatProfilesViewController::renameCurrent(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    local_28 = pcVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x14);
    }
    pcVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    pcVar2 = local_30;
    puVar1 = PTR_s_setTextFieldDefaultText__0269fd98;
    if (((ulong)pcVar3 & 1) != 0) {
      puVar4 = PTR_WCRSuperFloatProfileStore_026cee48;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_currentProfileName_026c5e30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_18);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_handleRename__026befc8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

