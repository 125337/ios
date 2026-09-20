// finishColorPickerPreviewIfNeeded @ 018c5898

/* Function Stack Size: 0x10 bytes */

void WCRefineChatToolbarViewController::finishColorPickerPreviewIfNeeded(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_awaitingColorPickerDismiss_026b7e80);
  bVar1 = true;
  if ((IVar2 & 1) != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_presentedViewController_0269d448);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = IVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(IVar2);
  }
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setAwaitingColorPickerDismiss__026b7e88,0);
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_clearStickyPreviewAppearanceLock_026b7e90);
  }
  return;
}

