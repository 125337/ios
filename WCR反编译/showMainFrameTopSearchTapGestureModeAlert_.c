// showMainFrameTopSearchTapGestureModeAlert: @ 01d8073c

/* Function Stack Size: 0x18 bytes */

void WCRefineSearchSettingsViewController::showMainFrameTopSearchTapGestureModeAlert_
               (ID param_1,SEL param_2,long_long param_3)

{
  cfstringStruct *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  char *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "WCUIAlertView";
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  if (pcVar2 != (char *)0x0) {
    pcVar1 = &cf_cNd__;
    if (local_28 != 1) {
      pcVar1 = &cf__ed__;
    }
    local_30 = pcVar2;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = &cf__ed__;
    if (local_28 != 1) {
      local_40 = &cf_cNZTd__;
    }
    local_38 = pcVar1;
    (*(code *)PTR__objc_retain_02578638)();
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_S_MRpQKbR_N_
              );
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_30;
    local_48 = puVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,local_18,
               PTR_s_alertCancel_026b2910);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_show_0269d280);
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

