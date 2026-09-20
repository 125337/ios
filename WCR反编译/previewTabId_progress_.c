// previewTabId:progress: @ 01e5852c

/* Function Stack Size: 0x20 bytes */

void WCRefineTelegramTabStripView::previewTabId_progress_
               (ID param_1,SEL param_2,ID param_3,double param_4)

{
  ID IVar1;
  double local_78;
  double local_70;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_interactiveTransition_026c69a0);
  if ((IVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_beginInteractiveTransition_026a8340);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setPreviewTabId__026c69e0,local_28);
  local_70 = param_4;
  if (param_4 <= 0.0) {
    local_70 = 0.0;
  }
  if (local_70 <= 1.0) {
    local_78 = local_70;
  }
  else {
    local_78 = 1.0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_78,local_18,PTR_s_setPreviewProgress__026c69e8);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layoutIndicator_026c6938);
  _objc_storeStrong(&local_28,0);
  return;
}

