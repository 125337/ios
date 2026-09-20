// FUN_01e40be4 @ 01e40be4

void FUN_01e40be4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_c0;
  cfstringStruct *local_a0;
  char *local_58;
  undefined *local_50;
  undefined4 local_44;
  char *local_40;
  undefined8 local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
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
    puVar2 = PTR_WCRTGTabsTextAlertProxy_026cf670;
    _objc_alloc_init();
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setSelfRef__0269fb58,puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setConfirm__0269fd88,local_38);
    pcVar1 = local_40;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_58 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setAlert__0269fd90,pcVar1);
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldPlaceHolder__026b6520);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_20 == (cfstringStruct *)0x0) {
        local_a0 = &cf___;
      }
      else {
        local_a0 = local_20;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setTextFieldPlaceHolder__026b6520,local_a0);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_c0 = &cf___;
      }
      else {
        local_c0 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_setTextFieldDefaultText__0269fd98,local_c0);
    }
    pcVar1 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_2c);
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

