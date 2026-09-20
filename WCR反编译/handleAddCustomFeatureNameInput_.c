// handleAddCustomFeatureNameInput: @ 01c95104

/* Function Stack Size: 0x18 bytes */

void WCRefinePluginFeatureManagementViewController::handleAddCustomFeatureNameInput_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  char *local_58;
  char *local_50;
  undefined *local_48;
  ID local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  FUN_01c91898();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_cNTN_Nzz);
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPendingAddPluginName__026c2ba8,local_30)
    ;
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_controllerSuggestionsForPluginNa_026c2bd8,local_30);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
    local_40 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_stringWithString__026a7e40,
               &cf_eQcNc6RhV__T);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_40;
    local_48 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
    if (IVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
      puVar3 = local_48;
      IVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_componentsJoinedByString__0269d140,&::cf_newline_s_);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_appendString__0269ccb0);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
    pcVar4 = "WCUIAlertView";
    _objc_getClass();
    local_50 = pcVar4;
    if (pcVar4 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_S_MRsXN_ecmR9_z);
      local_34 = 1;
    }
    else {
      _objc_alloc();
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_initWithTitle_message__0269d260,&cf_eQcNc6RhV);
      local_58 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x78);
      IVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_count_0269cfe0);
      if (IVar2 != 0) {
        pcVar5 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,
                   PTR_s_setTextFieldDefaultText__0269fd98);
        pcVar4 = local_58;
        puVar3 = PTR_s_setTextFieldDefaultText__0269fd98;
        if (((ulong)pcVar5 & 1) != 0) {
          IVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_firstObject_0269d1f8);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_performSelector_withObject__026ca7c0,puVar3);
          (*(code *)PTR__objc_release_02578630)(IVar2);
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_cancelAddCustomFeatureController_026c2be0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
                 PTR_s_handleAddCustomFeatureController_026c2be8);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
      _objc_storeStrong(&local_58,0);
      local_34 = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

