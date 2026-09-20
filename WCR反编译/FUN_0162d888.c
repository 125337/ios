// FUN_0162d888 @ 0162d888

void FUN_0162d888(void)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  pcVar1 = &cf_NewSettingViewController;
  _NSClassFromString();
  local_18 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_n_uNS_u);
  }
  else {
    _objc_alloc_init();
    local_20 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setHidesBottomBarWhenPushed__0269db60,1);
    FUN_0162dbb0(local_20);
    _objc_storeStrong(&local_20,0);
  }
  return;
}

