// wcr_latestUnprocessedGlobalRecordingAsset @ 006ec2b4

/* Function Stack Size: 0x10 bytes */

ID __thiscall
WCRefineScreenRecordingFrameProcessor::wcr_latestUnprocessedGlobalRecordingAsset
          (WCRefineScreenRecordingFrameProcessor *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double in_d0;
  undefined *local_68;
  undefined *local_48;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  undefined *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_18;
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_appEnteredBackgroundDate_026a6ea0);
  _objc_retainAutoreleasedReturnValue();
  local_68 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    in_d0 = -300.0;
    local_48 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dateByAddingTimeInterval__0269cd18);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeIntervalSinceDate__0269cb78,local_30);
  if (900.0 < in_d0) {
    puVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)
              (0xc08c200000000000,local_28,PTR_s_dateByAddingTimeInterval__0269cd18);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_30;
    local_30 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x408c200000000000,local_18,PTR_s_wcr_latestUnprocessedRecordingAs_026a6f60,local_30,
             local_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

