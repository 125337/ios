// processLocalFrameVideoAtURL: @ 006ef838

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::processLocalFrameVideoAtURL_
               (ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_48;
  ID local_40;
  undefined4 local_38;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_28 == 0) ||
     (IVar2 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_processing_026a6f10),
     (IVar2 & 1) != 0)) {
    IVar2 = local_18;
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_processing_026a6f10);
    pcVar1 = &cf__gU_O_YtNRL_N;
    if ((IVar3 & 1) == 0) {
      pcVar1 = &cf_eNeHe;
    }
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_wcr_showToast__026a6ef8,pcVar1);
    local_38 = 1;
  }
  else {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_canUseScreenRecordingFrameBe_026a6e30);
    if ((IVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_wcr_showScreenRecordingFrameBeta_026a7080);
      local_38 = 1;
    }
    else {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_effectiveFrameTemplateInfo_026a6fe0);
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar2;
      if (IVar2 == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_wcr_showToast__026a6ef8,&cf_HQbgHeUSVWYX_j_g);
        local_38 = 1;
      }
      else {
        IVar2 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_wcr_hasPhotoReadWriteAuthorizati_026a6f18);
        if ((IVar2 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_showToast__026a6ef8,&::cf___);
          local_38 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setProcessing__026a6ff0,1);
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_armProcessingWatchdog_026a7000);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_wcr_showToast__026a6ef8,&cf__g0WU_O_WYXYt_N_);
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_02323e38,local_18,PTR_s_wcr_showProgressHUDStage_progres_026a7008,&cf_WYX_,
                     1);
          puVar4 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___AVURLAsset_026ce330,PTR_s_URLAssetWithURL_options__026a1748,
                     local_28,0);
          _objc_retainAutoreleasedReturnValue();
          local_48 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_wcr_runPipelineWithAVAsset_audio_026a7058,puVar4,0,0,1,local_40,
                     0,*(undefined8 *)PTR____NSArray0___02578280,0,0);
          _objc_storeStrong(&local_48,0);
          local_38 = 0;
        }
      }
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

