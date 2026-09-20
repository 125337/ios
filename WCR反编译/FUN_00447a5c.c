// FUN_00447a5c @ 00447a5c

void FUN_00447a5c(undefined8 param_1,undefined8 param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar1 = &cf_WCUIAlertView;
  local_20 = param_2;
  local_18 = param_1;
  _NSClassFromString();
  if (pcVar1 != (cfstringStruct *)0x0) {
    local_28 = pcVar1;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,local_18,
               PTR_s_WCRLE_handleCreateGroup__026a3bd8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_showTextFieldWithMaxLen__0269e5e0,0x20);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

