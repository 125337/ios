// FUN_009188d4 @ 009188d4

void FUN_009188d4(long param_1)

{
  long lVar1;
  char *pcVar2;
  char *local_38;
  cfstringStruct *local_30;
  undefined1 local_21;
  long local_20;
  long local_18;
  
  lVar1 = *(long *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_pageMode_026aa248);
  local_21 = lVar1 == 1;
  local_30 = &cf_nx_nd_bgN;
  if (!(bool)local_21) {
    local_30 = &cf_nx_nd_bg__e_T;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = "WCUIAlertView";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_38 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Sm,0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_addBtnTitle_target_sel__0269d278,&cf_nd,*(undefined8 *)(param_1 + 0x20),
             PTR_s_confirmClearLogs_026aa378);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_show_0269d280);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

