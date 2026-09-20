// deleteSelectedWatermarks @ 01fb2f14

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkLibraryViewController::deleteSelectedWatermarks(ID param_1,SEL param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  char *local_30;
  char *local_28;
  SEL local_20;
  ID local_18;
  
  lVar1 = *(long *)(param_1 + (long)_selectedWatermarksForExport);
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0);
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQbRdv4lpS);
  }
  else {
    pcVar2 = "WCUIAlertView";
    _objc_getClass();
    if (pcVar2 != (char *)0x0) {
      local_28 = pcVar2;
      _objc_alloc();
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(local_18 + (long)_selectedWatermarksForExport),PTR_s_count_0269cfe0
                );
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_nx_Rd_Nv);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_initWithTitle_message__0269d260,&cf_nxRd);
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_18,
                 PTR_s_cancelDeleteSelected__026c9e30);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_addBtnTitle_target_sel__0269d278,&cf_Rd,local_18,
                 PTR_s_confirmDeleteSelected__026c1ba0);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_show_0269d280);
      _objc_storeStrong(&local_30,0);
    }
  }
  return;
}

