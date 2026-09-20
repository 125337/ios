// onExport @ 00fdbe40

/* Function Stack Size: 0x10 bytes */

void WCRIconNameCaptureFloatWindow::onExport(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_items_0269e4b0);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  puVar1 = PTR_WCRefineIconNameCaptureSupport_026cec30;
  if (IVar3 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_feS_QTy);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_exportNamesFileForItems_fromVC__026ad370,param_1,0);
    (*(code *)PTR__objc_release_02578630)(param_1);
  }
  return;
}

