// scheduleShapeHoldTimer @ 01652034

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::scheduleShapeHoldTimer(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_invalidateShapeHoldTimer_026b2118);
  puVar1 = PTR__OBJC_CLASS___NSTimer_026ce210;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323f38,PTR__OBJC_CLASS___NSTimer_026ce210,
             PTR_s_timerWithTimeInterval_target_sel_026b1f80,param_1,
             PTR_s_onShapeHoldTimerFired_026b2120,0,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setShapeHoldTimer__026b2110);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_shapeHoldTimer_026b2108);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addTimer_forMode__026ca4d0,param_1,
             *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

