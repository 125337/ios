// FUN_008c66c4 @ 008c66c4

void FUN_008c66c4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  (*DAT_028ce088)(param_1,param_2);
  uVar1 = 0;
  FUN_008c9688(0,param_1);
  _objc_retainAutoreleasedReturnValue();
  FUN_008c58c4(1,0);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineInputBoxGestureSupport_026ce678,
             PTR_s_voiceRecordHoldDidBecomeIdleWith_026a9cd0,param_1);
  return;
}

