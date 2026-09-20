// presentTextAlertTitle:message:placeholder:maxLen:confirmSel: @ 01e331dc

/* Function Stack Size: 0x34 bytes */

ID WCRefineSuperFloatURLSchemeViewController::
   presentTextAlertTitle_message_placeholder_maxLen_confirmSel_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,unsigned_int param_6,
             SEL param_7)

{
  char *pcVar1;
  long lVar2;
  cfstringStruct *local_b0;
  char *local_70;
  char *local_68;
  undefined4 local_5c;
  char *local_58;
  SEL local_50;
  unsigned_int local_44;
  long local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  pcVar1 = "WCUIAlertView";
  local_50 = param_7;
  local_44 = param_6;
  _objc_getClass();
  local_58 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_eQ9_zNS_u);
    local_18 = (char *)0x0;
    local_5c = 1;
  }
  else {
    _objc_alloc();
    if (local_38 == (cfstringStruct *)0x0) {
      local_b0 = &::cf___;
    }
    else {
      local_b0 = local_38;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_initWithTitle_message__0269d260,local_30,local_b0);
    local_68 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_showTextField_026b1b00);
      if (((ulong)pcVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_showTextField_026b1b00);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_44);
    }
    lVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      pcVar1 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_getTextField_0269fb48);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar1 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getTextField_0269fb48);
          _objc_retainAutoreleasedReturnValue();
          local_70 = pcVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
          if (((ulong)pcVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setText__026caa88,local_40);
          }
          _objc_storeStrong(&local_70,0);
        }
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setText__026caa88,local_40);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_20,
               PTR_s_handleAlertCancel__026b9590);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_20,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setActiveAlert__026b1ad0,local_68);
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
    pcVar1 = local_68;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_5c = 1;
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

