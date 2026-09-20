// onPillLongPress: @ 00fdb870

/* Function Stack Size: 0x18 bytes */

void WCRIconNameCaptureFloatWindow::onPillLongPress_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  if (lVar1 == 1) {
    puVar2 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_026cdff0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_38 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_impactOccurred_026ca6a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_disableFeatureFromFloating_026ad348
              );
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(lVar1 != 1);
  _objc_storeStrong(&local_28,0);
  return;
}

