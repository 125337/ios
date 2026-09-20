// FUN_017cba34 @ 017cba34

void FUN_017cba34(long param_1)

{
  long lVar1;
  char *pcVar2;
  cfstringStruct *local_58;
  char *local_38;
  undefined4 local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x38;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar1;
  if (lVar1 == 0) {
    local_2c = 1;
  }
  else {
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcrFinishEdit_026b4fe0);
      local_2c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_setEditStage__026b4fe8,*(undefined8 *)(param_1 + 0x40));
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setEditAlert__026b4ff0,local_38);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_showTextFieldWithMaxLen__0269e5e0,*(undefined4 *)(param_1 + 0x48));
      local_58 = *(cfstringStruct **)(param_1 + 0x30);
      if (local_58 == (cfstringStruct *)0x0) {
        local_58 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setTextFieldDefaultText__0269fd98,local_58);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_28,
                 PTR_s_wcrCancelEditInput_026b4ff8);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_28,
                 PTR_s_wcrConfirmEditInput_026b5000);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

