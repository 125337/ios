// forwardThisScreenshot @ 01674fa4

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::forwardThisScreenshot(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  byte local_39;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitEditingModesIfNeeded_026b2470);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_imagePreparedForExport_026b2668);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  if (IVar1 == 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasActiveCropSelection_026b1f60);
    if ((IVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSOX_vVGr);
    }
    local_2c = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_wcr_exportDataForImage_preferPNG_026b2678,IVar1,0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_length_0269cca0);
    if (IVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      local_2c = 1;
    }
    else {
      local_39 = 0;
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_presentOfficialForwardPicker_026b2680,local_28,local_38,
                 &local_39);
      if ((IVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_blSO);
        if ((local_39 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissCropWindow_026b2460);
        }
      }
      local_2c = 0;
    }
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

