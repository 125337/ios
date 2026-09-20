// FUN_00257bf8 @ 00257bf8

void FUN_00257bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined8 param_5,long param_6,byte param_7)

{
  char *pcVar1;
  undefined *puVar2;
  cfstringStruct *local_138;
  int local_114;
  cfstringStruct *local_f0;
  cfstringStruct *local_d8;
  undefined *local_80;
  char *local_78;
  undefined4 local_70;
  char *local_60;
  byte local_51;
  long local_50;
  long local_48;
  int local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_3);
  local_48 = 0;
  local_3c = param_4;
  _objc_storeStrong(&local_48,param_5);
  pcVar1 = "WCUIAlertView";
  local_51 = param_7;
  local_50 = param_6;
  _objc_getClass();
  local_60 = pcVar1;
  if (((pcVar1 == (char *)0x0) || (local_48 == 0)) || (local_50 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_QeQFh);
    local_70 = 1;
  }
  else {
    if ((local_51 & 1) != 0) {
      FUN_0025816c();
    }
    pcVar1 = local_60;
    _objc_alloc();
    if (local_28 == (cfstringStruct *)0x0) {
      local_d8 = &cf___;
    }
    else {
      local_d8 = local_28;
    }
    if (local_30 == (cfstringStruct *)0x0) {
      local_f0 = &cf___;
    }
    else {
      local_f0 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_initWithTitle_message__0269d260,local_d8,local_f0);
    local_78 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_showTextFieldWithMaxLen__0269e5e0);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_3c == 0) {
        local_114 = 0x14;
      }
      else {
        local_114 = local_3c;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_showTextFieldWithMaxLen__0269e5e0,local_114);
    }
    pcVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_respondsToSelector__026ca818,PTR_s_setTextFieldDefaultText__0269fd98);
    if (((ulong)pcVar1 & 1) != 0) {
      if (local_38 == (cfstringStruct *)0x0) {
        local_138 = &cf___;
      }
      else {
        local_138 = local_38;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_setTextFieldDefaultText__0269fd98,local_138);
    }
    puVar2 = PTR_WCREmoticonGroupAlertBridge_026ce430;
    _objc_alloc_init();
    local_80 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTarget__0269e1a8,local_48);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setConfirmSel__026a0f80,local_50);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setKeepPanel__026a0f88,local_51 & 1);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setAlertView__026a0dd8,local_78);
    (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setSelfRef__0269fb58,local_80);
    pcVar1 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_respondsToSelector__026ca818,
               PTR_s_addCancelBtnTitle_target_sel__0269d268);
    if (((ulong)pcVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,local_80,
                 PTR_s_onCancel__0269fda0);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_80,
                 PTR_s_onCancel__0269fda0);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_80,
               PTR_s_onConfirm__0269fda8);
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_show_0269d280);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    local_70 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

