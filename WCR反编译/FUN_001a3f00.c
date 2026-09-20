// FUN_001a3f00 @ 001a3f00

void FUN_001a3f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  cfstringStruct *local_e8;
  cfstringStruct *local_b8;
  char *local_68;
  undefined *local_60;
  undefined4 local_58;
  char *local_48;
  undefined8 local_40;
  cfstringStruct *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_48 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_58 = 1;
  }
  else {
    puVar2 = PTR_WCRefineContactsPackTextAlertProxy_026ce3b0;
    _objc_alloc_init();
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setSelfRef__0269fb58,puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setConfirm__0269fd88,local_40);
    pcVar1 = local_48;
    _objc_alloc();
    if (local_28 == (cfstringStruct *)0x0) {
      local_b8 = &cf_O9eTy;
    }
    else {
      local_b8 = local_28;
    }
    pcVar3 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_initWithTitle_message__0269d260,local_b8,local_30);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAlert__0269fd90,local_68);
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_38 == (cfstringStruct *)0x0) {
        local_e8 = &cf___;
      }
      else {
        local_e8 = local_38;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_setTextFieldDefaultText__0269fd98,local_e8);
    }
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x20);
    }
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_60,
                 PTR_s_onCancel__0269fda0);
    }
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_60,
                 PTR_s_onConfirm__0269fda8);
    }
    pcVar1 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_show_0269d280);
    }
    _objc_storeStrong(&local_68);
    _objc_storeStrong(&local_60,0);
    local_58 = 0;
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

