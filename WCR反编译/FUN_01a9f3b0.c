// FUN_01a9f3b0 @ 01a9f3b0

void FUN_01a9f3b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_b0;
  cfstringStruct *local_90;
  char *local_50;
  undefined *local_48;
  undefined4 local_3c;
  char *local_38;
  undefined8 local_30;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  pcVar1 = "WCUIAlertView";
  _objc_getClass();
  local_38 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_3c = 1;
  }
  else {
    puVar2 = PTR_WCRGroupTextAlertProxy_026cf338;
    _objc_alloc_init();
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setSelfRef__0269fb58,puVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setConfirm__0269fd88,local_30);
    pcVar1 = local_38;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setAlert__0269fd90,pcVar1);
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldPlaceHolder__026b6520);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_20 == (cfstringStruct *)0x0) {
        local_90 = &cf___;
      }
      else {
        local_90 = local_20;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setTextFieldPlaceHolder__026b6520,local_90);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_28 == (cfstringStruct *)0x0) {
        local_b0 = &cf___;
      }
      else {
        local_b0 = local_28;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setTextFieldDefaultText__0269fd98,local_b0);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x20);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_48,
                 PTR_s_onCancel__0269fda0);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_addBtnTitle_target_sel__0269d278);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_48,
                 PTR_s_onConfirm__0269fda8);
    }
    pcVar1 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_show_0269d280);
    if (((ulong)pcVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

