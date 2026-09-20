// askNextOrOpen @ 0163696c

/* Function Stack Size: 0x10 bytes */

void WCRSFURLSchemeOpener::askNextOrOpen(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  undefined4 local_3c;
  char *local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingKeys_026b1af0);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_templateURL_026b1af8);
    _objc_retainAutoreleasedReturnValue();
    local_28 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cancel_0269d1e8);
    FUN_01636ce8(local_28);
    _objc_storeStrong(&local_28,0);
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pendingKeys_026b1af0);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar2;
    (*(code *)PTR__objc_release_02578630)(IVar1);
    pcVar3 = "WCUIAlertView";
    _objc_getClass();
    local_38 = pcVar3;
    if (pcVar3 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQ9_zNS_u);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cancel_0269d1e8);
      local_3c = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_eQ_);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = &cf_eQT_fbc;
      pcVar3 = local_38;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_58 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
      if (((ulong)pcVar3 & 1) == 0) {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_showTextField_026b1b00);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_showTextField_026b1b00);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78)
        ;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_18,
                 PTR_s_handleCancel__026b1b08);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_l,local_18,
                 PTR_s_handleParamConfirm__026b1b10);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setActiveAlert__026b1ad0,local_58);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      _objc_storeStrong(&local_48,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

