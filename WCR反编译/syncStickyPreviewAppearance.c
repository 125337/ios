// syncStickyPreviewAppearance @ 018c8be4

/* Function Stack Size: 0x10 bytes */

void WCRefineChatToolbarViewController::syncStickyPreviewAppearance(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_stickyPreviewHost_026b7f50);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (param_1 != 0) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_previewAppearanceLocked_026b7ea0);
    if ((IVar1 & 1) == 0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stickyPreviewHost_026b7f50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_realtimePreviewToolbar_026b7f48);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_s_wcr_applyAppearanceColorsOnly_0269f178;
    local_28 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar1,PTR_s_respondsToSelector__026ca818,PTR_s_wcr_applyAppearanceColorsOnly_0269f178
              );
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_refreshRealtimePreviewToolbar_026b7f58);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,puVar2);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

