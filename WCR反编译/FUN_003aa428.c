// FUN_003aa428 @ 003aa428

void FUN_003aa428(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  int local_cc;
  cfstringStruct *local_b8;
  cfstringStruct *local_98;
  char *local_58;
  undefined *local_50;
  undefined4 local_44;
  char *local_40;
  undefined8 local_38;
  int local_2c;
  cfstringStruct *local_28;
  undefined8 local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_2c = param_4;
  _objc_storeStrong(&local_38,param_5);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_40 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_44 = 1;
  }
  else {
    puVar2 = PTR_WCRGroupingTextAlertProxy_026ce658;
    _objc_alloc_init();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setSelfRef__0269fb58,puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setConfirm__0269fd88,local_38);
    pcVar1 = local_40;
    _objc_alloc();
    if (local_18 == (cfstringStruct *)0x0) {
      local_98 = &cf_O9e;
    }
    else {
      local_98 = local_18;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_initWithTitle_message__0269d260,local_98,local_20);
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAlert__0269fd90,pcVar1);
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_b8 = &cf___;
      }
      else {
        local_b8 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setTextFieldDefaultText__0269fd98,local_b8);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_2c == 0) {
        local_cc = 0x40;
      }
      else {
        local_cc = local_2c;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_cc);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_50,
                 PTR_s_onCancel__0269fda0);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_50,
                 PTR_s_onConfirm__0269fda8);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_show_0269d280);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    local_44 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

