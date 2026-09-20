// FUN_00174888 @ 00174888

void FUN_00174888(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char *pcVar2;
  char *local_40;
  uint local_34;
  char *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  bVar1 = pcVar2 != (char *)0x0;
  local_30 = pcVar2;
  if (bVar1) {
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nx_,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_show_0269d280);
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_28);
  }
  local_34 = (uint)!bVar1;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

