// showImportSheet @ 01c785ac

/* Function Stack Size: 0x10 bytes */

void WCRefinePageBackgroundLibraryViewController::showImportSheet(ID param_1,SEL param_2)

{
  char *pcVar1;
  ID IVar2;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  pcVar1 = "WCUIActionSheet";
  local_20 = param_2;
  local_18 = param_1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NvQ_eQ,local_18,
             PTR_s_selectFromPhotoLibrary_026c2730);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addBtnTitle_target_sel__0269d278,&cf_NeN_eQ,local_18,
             PTR_s_selectFromFiles_026b64e0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
  pcVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_showInView__0269d310);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

