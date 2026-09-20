// invalidateShapeHoldTimer @ 01651fb0

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::invalidateShapeHoldTimer(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shapeHoldTimer_026b2108);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setShapeHoldTimer__026b2110,0);
  return;
}

