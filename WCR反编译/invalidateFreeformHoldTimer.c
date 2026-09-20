// invalidateFreeformHoldTimer @ 0164a284

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::invalidateFreeformHoldTimer(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformHoldTimer_026b1f68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFreeformHoldTimer__026b1f70,0);
  return;
}

