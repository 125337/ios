// flushLayoutSliderPreview @ 018cd450

/* Function Stack Size: 0x10 bytes */

void WCRefineChatToolbarViewController::flushLayoutSliderPreview(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setLayoutPreviewTimer__026b8078,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingLayoutPreviewKey_026b8080);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingLayoutPreviewValue_026b8088);
  FUN_018cd4e0(IVar1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

