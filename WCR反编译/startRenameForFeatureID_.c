// startRenameForFeatureID: @ 01c91264

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginFeatureManagementViewController::startRenameForFeatureID_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *local_70;
  char *local_48;
  cfstringStruct *local_40;
  char *local_38;
  undefined4 local_2c;
  long local_28;
  SEL local_20;
  cfstringStruct *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setPendingRenameFeatureID__026c2b50,local_28);
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    local_38 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXN_ec_TT9_z);
      local_2c = 1;
    }
    else {
      pcVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_featureEntryMap_026c2b58);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar5;
      if (pcVar5 == (cfstringStruct *)0x0) {
        local_70 = &::cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = local_70;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = local_38;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x1e);
      pcVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      if ((pcVar3 != (cfstringStruct *)0x0) &&
         (pcVar2 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_48,PTR_s_respondsToSelector__026ca818,
                    PTR_s_setTextFieldDefaultText__0269fd98), ((ulong)pcVar2 & 1) != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_performSelector_withObject__026ca7c0,
                   PTR_s_setTextFieldDefaultText__0269fd98,local_40);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_cancelRenameInput_026c2b60);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_confirmRenameInput__026c2b68);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_show_0269d280);
      _objc_storeStrong(&local_48);
      _objc_storeStrong(&local_40,0);
      local_2c = 0;
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

