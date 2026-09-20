// savePasteboard @ 016728d8

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRSuperFloatCropViewController::savePasteboard
          (WCRSuperFloatCropViewController *this,ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  ID IVar3;
  double in_d0;
  uint local_40;
  ID local_38;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_exitEditingModesIfNeeded_026b2470);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_imagePreparedForExport_026b2668);
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar3;
  if (IVar3 == 0) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_hasActiveCropSelection_026b1f60);
    if ((IVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSOX_vVGr);
    }
    goto LAB_01672b6c;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_writeImageToPasteboardPreserving_026b2318,IVar3);
  IVar3 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShape_026b1ea0);
  bVar2 = false;
  local_40 = 1;
  if (IVar3 != 1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShape_026b1ea0);
    if (IVar3 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropCornerRadius_026b1eb0);
      local_40 = 1;
      if (0.5 < in_d0) goto LAB_01672ad8;
    }
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShape_026b1ea0);
    if (IVar3 == 2) {
      local_38 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_freeformPath_026b1ee8);
      _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      if (local_38 != 0) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_freeformClosed_026b1ef0);
        local_40 = 1;
        if ((IVar3 & 1) != 0) goto LAB_01672ad8;
      }
    }
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_cropShadowEnabled_026b1eb8);
    local_40 = (uint)IVar3;
  }
LAB_01672ad8:
  if (bVar2) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  pcVar1 = &cf__Y6Rf_;
  if ((local_40 & 1) == 0) {
    pcVar1 = &cf__OX_0RjR4_g;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,pcVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissCropWindow_026b2460);
LAB_01672b6c:
  _objc_storeStrong(&local_28,0);
  return;
}

