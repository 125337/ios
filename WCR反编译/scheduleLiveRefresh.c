// scheduleLiveRefresh @ 01ed82e4

/* Function Stack Size: 0x10 bytes */

void WCRToDoAdjustmentViewController::scheduleLiveRefresh(ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewTimer_026b81d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSTimer_026ce210;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c88,PTR__OBJC_CLASS___NSTimer_026ce210,
               PTR_s_timerWithTimeInterval_target_sel_026b1f80,param_1,
               PTR_s_flushLiveRefresh_026c16e0,0,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPreviewTimer__026b81e0);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSRunLoop_026ce198;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSRunLoop_026ce198,PTR_s_mainRunLoop_026ca7a8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewTimer_026b81d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_addTimer_forMode__026ca4d0,param_1,
               *(undefined8 *)PTR__NSRunLoopCommonModes_02578258);
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  return;
}

