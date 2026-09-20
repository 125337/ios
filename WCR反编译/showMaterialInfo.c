// showMaterialInfo @ 01d00f4c

/* Function Stack Size: 0x10 bytes */

void WCRefineProfileBgMaterialRepositoryViewController::showMaterialInfo(ID param_1,SEL param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar2 = "WCUIAlertView";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_28 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    _WCRefineProfileBgHTMLInfoText();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__PgN_,pcVar2,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  else {
    _objc_alloc();
    pcVar3 = pcVar2;
    _WCRefineProfileBgHTMLInfoText();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle_message__0269d260,&cf__PgN_);
    local_30 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_wSN,0)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
    _objc_storeStrong(&local_30,0);
  }
  return;
}

