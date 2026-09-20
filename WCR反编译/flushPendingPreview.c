// flushPendingPreview @ 018d3af8

/* Function Stack Size: 0x10 bytes */

void WCRChatToolbarAdjustmentViewController::flushPendingPreview(ID param_1,SEL param_2)

{
  ID IVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPreviewTimer__026b81e0,0);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingPreviewKey_026b81e8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pendingPreviewValue_026b81f0);
  FUN_018cd4e0(IVar1);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  return;
}

