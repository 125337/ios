// addGestures @ 01fa3438

/* Function Stack Size: 0x10 bytes */

void WCRefineWatermarkEditorViewController::addGestures(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR__OBJC_CLASS___UIPanGestureRecognizer_026ce230;
  local_20 = param_2;
  local_18 = param_1;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_18 + (long)_watermarkContainerView),
             PTR_s_addGestureRecognizer__026ca4a8,local_28);
  puVar1 = PTR__OBJC_CLASS___UIPinchGestureRecognizer_026cee88;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setDelegate__026ca910,local_18);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(local_18 + (long)_watermarkContainerView),
             PTR_s_addGestureRecognizer__026ca4a8,local_30);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

