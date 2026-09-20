// wcr_processGlobalRecordingAlbumEnhancementScan @ 006eb684

/* Function Stack Size: 0x10 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_processGlobalRecordingAlbumEnhancementScan
               (ID param_1,SEL param_2)

{
  ID IVar1;
  undefined *puVar2;
  dispatch_time_t dVar3;
  byte local_8c;
  byte local_80;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  byte local_42;
  byte local_41;
  undefined *local_40;
  undefined4 local_38;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_processing_026a6f10);
  if ((((param_1 & 1) == 0) &&
      (IVar1 = local_18,
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_waitingForRecordingAsset_026a6eb8),
      (IVar1 & 1) == 0)) &&
     (IVar1 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_isApplicationActive_026a6ed8),
     (IVar1 & 1) != 0)) {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_shouldRunGlobalAlbumEnhancem_026a6ec8);
    if ((IVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_refreshRecordingBaselineSnap_026a6e10);
    }
    else {
      IVar1 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_hasPhotoReadWriteAuthorizati_026a6f18);
      if ((IVar1 & 1) != 0) {
        IVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_wcr_latestUnprocessedGlobalRecor_026a6f48);
        _objc_retainAutoreleasedReturnValue();
        local_28 = IVar1;
        if (IVar1 == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_wcr_refreshRecordingBaselineSnap_026a6e10);
          local_38 = 1;
        }
        else {
          puVar2 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          local_40 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_screenRecordingFrameEnabled_026a6d80);
          local_80 = 0;
          if (((ulong)puVar2 & 1) != 0) {
            puVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_screenRecordingFrameAlbumEnhance_026a6e38);
            local_80 = (byte)puVar2;
          }
          local_41 = local_80 & 1;
          puVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_videoWatermarkEnabled_026a6d88);
          local_8c = 0;
          if (((ulong)puVar2 & 1) != 0) {
            puVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_videoWatermarkAlbumEnhancementEn_026a6f50);
            local_8c = (byte)puVar2;
          }
          local_42 = local_8c & 1;
          IVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_wcr_shouldShowToastForFrame_wate_026a6ef0,local_41 & 1,local_42)
          ;
          if ((IVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_18,PTR_s_wcr_showToast__026a6ef8,&cf_hKm0RU_O___g);
            dVar3 = _dispatch_time(0,450000000);
            puVar2 = PTR___dispatch_main_q_02578680;
            _objc_retainAutoreleaseReturnValue();
            _objc_retainAutoreleasedReturnValue();
            IVar1 = local_18;
            local_70 = PTR___NSConcreteStackBlock_02578660;
            local_68 = 0xc2000000;
            local_64 = 0;
            local_60 = FUN_006eba80;
            local_58 = &DAT_02578c20;
            (*(code *)PTR__objc_retain_02578638)();
            local_50 = IVar1;
            _dispatch_after(dVar3,puVar2,&local_70);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            _objc_storeStrong(&local_50,0);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_wcr_processRecordingAsset_global_026a6f58,local_28,1);
          _objc_storeStrong(&local_40,0);
          local_38 = 0;
        }
        _objc_storeStrong(&local_28,0);
      }
    }
  }
  return;
}

