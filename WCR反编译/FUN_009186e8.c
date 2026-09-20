// FUN_009186e8 @ 009186e8

void FUN_009186e8(long param_1)

{
  long lVar1;
  char *pcVar2;
  char *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_pageMode_026aa248);
  if (lVar1 + -1 == 0) {
    _objc_storeStrong(0,&local_28,&cf_newline_s_);
  }
  else {
    _objc_storeStrong(lVar1 + -1,&local_28,&cf_newline_s_);
  }
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

