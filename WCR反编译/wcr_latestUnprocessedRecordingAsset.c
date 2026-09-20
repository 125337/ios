// wcr_latestUnprocessedRecordingAsset @ 006ebac8

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x10 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_latestUnprocessedRecordingAsset
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_180;
  undefined *local_148;
  undefined *local_128;
  undefined *local_110;
  undefined *local_f8;
  undefined *local_d0;
  undefined *local_c0;
  undefined *local_b8;
  byte local_a9;
  undefined *local_a8;
  byte local_99;
  undefined *local_98;
  byte local_89;
  undefined *local_88;
  byte local_79;
  undefined *local_78;
  byte local_69;
  undefined *local_68;
  byte local_59;
  undefined *local_58;
  undefined *local_40;
  undefined *local_38;
  SEL local_30;
  undefined *local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_30 = param_2;
  local_28 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recordingSearchStartDate_026a6e98);
  _objc_retainAutoreleasedReturnValue();
  local_59 = 0;
  local_69 = 0;
  local_79 = 0;
  local_89 = 0;
  local_99 = 0;
  local_a9 = 0;
  local_f8 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    local_110 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recordingStartDate_026a6e78);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_110;
    if (local_110 == (undefined *)0x0) {
      local_128 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_appEnteredBackgroundDate_026a6ea0);
      _objc_retainAutoreleasedReturnValue();
      local_69 = 1;
      local_68 = local_128;
      if (local_128 == (undefined *)0x0) {
        puVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recordingStopDate_026a6f28);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          local_148 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (0xc05e000000000000,local_38,PTR_s_dateByAddingTimeInterval__0269cd18);
          _objc_retainAutoreleasedReturnValue();
          local_a9 = 1;
          local_a8 = local_148;
        }
        else {
          local_148 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recordingStopDate_026a6f28);
          _objc_retainAutoreleasedReturnValue();
          local_89 = 1;
          local_88 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(0xc05e000000000000);
          _objc_retainAutoreleasedReturnValue();
          local_99 = 1;
          local_98 = local_148;
        }
        local_128 = local_148;
      }
      local_110 = local_128;
    }
    local_f8 = local_110;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = local_f8;
  if ((local_a9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  if ((local_99 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_98);
  }
  if ((local_89 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_88);
  }
  if ((local_79 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  if ((local_69 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recordingStopDate_026a6f28);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    local_180 = local_40;
  }
  else {
    local_c0 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_recordingStopDate_026a6f28);
    _objc_retainAutoreleasedReturnValue();
    local_180 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(0xc03e000000000000);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = local_180;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_b8 = local_180;
  if (puVar1 != (undefined *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
    (*(code *)PTR__objc_release_02578630)(local_c0);
  }
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x408c200000000000,local_28,PTR_s_wcr_latestUnprocessedRecordingAs_026a6f60,local_40,
             local_b8,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

