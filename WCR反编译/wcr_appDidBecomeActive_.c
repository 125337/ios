// wcr_appDidBecomeActive: @ 006e9ec4

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_appDidBecomeActive_
               (ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_a0;
  undefined *local_48;
  undefined8 local_28;
  SEL local_20;
  undefined *local_18;
  
  uVar1 = DAT_02323d00;
  local_28 = 0;
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_shouldObserveRecordingPostPr_026a6db8);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_refreshRecordingBaselineSnap_026a6e10);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lastCapturedState_026a6e60);
    if (((uint)puVar3 & 1) == (uint)puVar2) {
      if (((ulong)puVar3 & 1) == 0) {
        puVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_waitingForRecordingAsset_026a6eb8);
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_wcr_shouldRunGlobalAlbumEnhancem_026a6ec8);
          if (((ulong)puVar2 & 1) == 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_wcr_refreshRecordingBaselineSnap_026a6e10);
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,local_18,PTR_s_wcr_scheduleGlobalRecordingAlbum_026a6ed0,
                       &cf_becomeactiveglobal);
          }
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar1,local_18,PTR_s_wcr_scheduleRecordingScanAfterDe_026a6ec0,
                     &cf_becomeactivepending);
        }
      }
      else {
        puVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recordingStartDate_026a6e78);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (puVar2 == (undefined *)0x0) {
          puVar2 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_appEnteredBackgroundDate_026a6ea0);
          _objc_retainAutoreleasedReturnValue();
          local_a0 = puVar2;
          if (puVar2 == (undefined *)0x0) {
            local_48 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            local_a0 = local_48;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setRecordingStartDate__026a6e70,local_a0);
          if (puVar2 == (undefined *)0x0) {
            (*(code *)PTR__objc_release_02578630)(local_48);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_recordingStartDate_026a6e78);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(0xc014000000000000);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_setRecordingSearchStartDate__026a6e80);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_wcr_refreshRecordingBaselineSnap_026a6e10);
        }
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_handleCapturedState_reason__026a6e58,(uint)puVar3 & 1,
                 &cf_becomeactivecapturesync);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

