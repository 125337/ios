// wcr_configureExportSession:outputURL:videoComposition:audioMix:timeRange: @ 006ff1a8

/* Function Stack Size: 0x60 bytes */

bool WCRefineScreenRecordingFrameProcessor::
     wcr_configureExportSession_outputURL_videoComposition_audioMix_timeRange_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               AnonymousStructure0 param_7)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ulong uVar5;
  ulong local_e0;
  undefined1 auStack_d8 [48];
  undefined1 auStack_a8 [51];
  byte local_75;
  undefined4 local_64;
  long local_58;
  undefined8 local_50;
  long local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  param_7.field0_0x0._8_8_ = param_7.field0_0x0._8_8_;
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_5);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_6);
  if ((local_40 == 0) || (local_48 == 0)) {
    local_21 = 0;
    local_64 = 1;
    goto LAB_006ff7c8;
  }
  puVar2 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOutputURL__026a1820,local_48);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setVideoComposition__026a7190,local_50);
  if (local_58 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setAudioMix__026a7198,local_58);
  }
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_75 = (byte)puVar3;
  if (((ulong)puVar3 & 1) == 0) {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_processedMarkerMetadataItems_026a7338);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setMetadata__026a7340);
    (*(code *)PTR__objc_release_02578630)(IVar4);
  }
  bVar1 = false;
  if ((((*(uint *)(param_7.field0_0x0.field0_0x0 + 0xc) & 1) != 0) &&
      (bVar1 = false, (*(uint *)(param_7.field0_0x0.field0_0x0 + 0x24) & 1) != 0)) &&
     (bVar1 = false, *(long *)(param_7.field0_0x0.field0_0x0 + 0x28) == 0)) {
    bVar1 = -1 < *(long *)(param_7.field0_0x0.field0_0x0 + 0x18);
  }
  if (bVar1) {
    _memcpy(auStack_a8,(void *)param_7.field0_0x0.field0_0x0,0x30);
    uVar5 = local_40;
    _memcpy(auStack_d8,auStack_a8,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_setTimeRange__026a71a0,auStack_d8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setShouldOptimizeForNetworkUse__026a71a8,0);
  if ((local_75 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setOutputFileType__026a1828,
               *(undefined8 *)PTR__AVFileTypeMPEG4_02578528);
    local_21 = 1;
    local_64 = 1;
    goto LAB_006ff7c8;
  }
  uVar5 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_supportedFileTypes_026a71b0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar5,PTR_s_containsObject__0269cbb8,*(undefined8 *)PTR__AVFileTypeMPEG4_02578528);
  if ((uVar5 & 1) == 0) {
    uVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_containsObject__0269cbb8,
               *(undefined8 *)PTR__AVFileTypeQuickTimeMovie_02578538);
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setOutputFileType__026a1828,
                 *(undefined8 *)PTR__AVFileTypeQuickTimeMovie_02578538);
      goto LAB_006ff750;
    }
    uVar5 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    if (uVar5 != 0) {
      uVar5 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOutputFileType__026a1828);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      goto LAB_006ff750;
    }
    local_21 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setOutputFileType__026a1828,
               *(undefined8 *)PTR__AVFileTypeMPEG4_02578528);
LAB_006ff750:
    local_21 = 1;
  }
  local_64 = 1;
  _objc_storeStrong(&local_e0,0);
LAB_006ff7c8:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

