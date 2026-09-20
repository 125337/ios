// FUN_0053d3d4 @ 0053d3d4

void FUN_0053d3d4(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  char *local_30;
  char *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  local_28 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_doExit_026a4d68);
  }
  else {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_30 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NOX_,local_18,
               PTR_s_WCRefineOnDraftAlertNotSave_026a4cc0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_OX_,local_18,
               PTR_s_WCRefineOnDraftAlertSave_026a4cc8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

