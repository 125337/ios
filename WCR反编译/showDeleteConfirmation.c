// showDeleteConfirmation @ 01fae78c

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::showDeleteConfirmation(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  if (*(long *)(param_1 + (long)_selectedImagePath) != 0) {
    pcVar1 = &cf_WCUIAlertView;
    local_20 = param_2;
    local_18 = param_1;
    _NSClassFromString();
    if (pcVar1 != (cfstringStruct *)0x0) {
      local_28 = pcVar1;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_30 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_18,
                 PTR_s_confirmDeleteWatermark_026c9df8);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

