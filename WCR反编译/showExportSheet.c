// showExportSheet @ 01c78700

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::showExportSheet(ID param_1,SEL param_2)

{
  ID IVar1;
  char *pcVar2;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_files_026c2670);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ofVN__Nzz);
  }
  else {
    pcVar2 = "WCUIActionSheet";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_addBtnTitle_target_sel__0269d278,&cf_b_Q,local_18,
               PTR_s_enterMultiSelect_026c1ae8);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf_hQ_Q,local_18,
               PTR_s_exportAll_026b3a30);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar2 = local_28;
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

