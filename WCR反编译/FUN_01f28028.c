// FUN_01f28028 @ 01f28028

void FUN_01f28028(long param_1)

{
  char *pcVar1;
  char *local_28;
  long local_20;
  long local_18;
  
  pcVar1 = "WCUIAlertView";
  local_20 = param_1;
  local_18 = param_1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf__Yv,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_show_0269d280);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

