// wcr_legacyConfigureExportSession:outputURL:videoComposition:audioMix:timeRange: @ 006f42e0

/* Function Stack Size: 0x60 bytes */

bool WCRefineScreenRecordingFrameProcessor::
     wcr_legacyConfigureExportSession_outputURL_videoComposition_audioMix_timeRange_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               AnonymousStructure0 param_7)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_e0;
  undefined1 auStack_d4 [48];
  undefined1 auStack_a4 [64];
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
    goto LAB_006f4794;
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
  bVar1 = false;
  if ((((*(uint *)(param_7.field0_0x0.field0_0x0 + 0xc) & 1) != 0) &&
      (bVar1 = false, (*(uint *)(param_7.field0_0x0.field0_0x0 + 0x24) & 1) != 0)) &&
     (bVar1 = false, *(long *)(param_7.field0_0x0.field0_0x0 + 0x28) == 0)) {
    bVar1 = -1 < *(long *)(param_7.field0_0x0.field0_0x0 + 0x18);
  }
  if (bVar1) {
    _memcpy(auStack_a4,(void *)param_7.field0_0x0.field0_0x0,0x30);
    uVar3 = local_40;
    _memcpy(auStack_d4,auStack_a4,0x30);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_setTimeRange__026a71a0,auStack_d4);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setShouldOptimizeForNetworkUse__026a71a8,0);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_supportedFileTypes_026a71b0);
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_containsObject__0269cbb8,*(undefined8 *)PTR__AVFileTypeMPEG4_02578528);
  if ((uVar3 & 1) == 0) {
    uVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_e0,PTR_s_containsObject__0269cbb8,
               *(undefined8 *)PTR__AVFileTypeQuickTimeMovie_02578538);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_setOutputFileType__026a1828,
                 *(undefined8 *)PTR__AVFileTypeQuickTimeMovie_02578538);
      goto LAB_006f475c;
    }
    uVar3 = local_e0;
    (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_count_0269cfe0);
    if (uVar3 != 0) {
      uVar3 = local_e0;
      (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setOutputFileType__026a1828);
      (*(code *)PTR__objc_release_02578630)(uVar3);
      goto LAB_006f475c;
    }
    local_21 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_setOutputFileType__026a1828,
               *(undefined8 *)PTR__AVFileTypeMPEG4_02578528);
LAB_006f475c:
    local_21 = 1;
  }
  local_64 = 1;
  _objc_storeStrong(&local_e0,0);
LAB_006f4794:
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

