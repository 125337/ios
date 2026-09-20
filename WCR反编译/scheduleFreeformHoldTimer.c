// scheduleFreeformHoldTimer @ 0164a308

/* Function Stack Size: 0x10 bytes */

void WCRSuperFloatCropViewController::scheduleFreeformHoldTimer(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_invalidateFreeformHoldTimer_026b1f30);
  puVar1 = PTR__OBJC_CLASS___NSTimer_026ce210;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323c78,PTR__OBJC_CLASS___NSTimer_026ce210,
             PTR_s_timerWithTimeInterval_target_sel_026b1f80,param_1,
             PTR_s_onFreeformHoldFired_026b1f78,0,0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setFreeformHoldTimer__026b1f70);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_freeformHoldTimer_026b1f68);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_addTimer_forMode__026ca4d0,param_1,
             *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

