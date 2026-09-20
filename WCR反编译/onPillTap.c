// onPillTap @ 00fdb77c

/* Function Stack Size: 0x10 bytes */

void WCRIconNameCaptureFloatWindow::onPillTap(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pillMovedDuringPan_026ad338);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_undockPillIfNeeded_026ad2f0);
    puVar1 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_28 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_impactOccurred_026ca6a0);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_expandAnimated__026ad340,1);
    _objc_storeStrong(&local_28,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPillMovedDuringPan__026ad318,0);
  }
  return;
}

