// prepareBackgroundAudioPipeline @ 0150ec48

/* Function Stack Size: 0x10 bytes */

bool WCRSpeechBroadcastEngine::prepareBackgroundAudioPipeline(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 local_41;
  ulong local_40;
  undefined *local_38;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineBackgroundKeepAlive_026ceb10;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBackgroundKeepAlive_026ceb10,PTR_s_hostCallOwnsAudioSession_026b0008);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_WCRefineBackgroundKeepAlive_026ceb10;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineBackgroundKeepAlive_026ceb10,PTR_s_otherAppOwnsAudio_026b0010);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIApplication_026ce010;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIApplication_026ce010,PTR_s_sharedApplication_026caaf8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (puVar3 == (undefined *)0x0) {
        local_11 = 1;
      }
      else {
        local_30 = 0;
        puVar2 = PTR__OBJC_CLASS___AVAudioSession_026ce9d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___AVAudioSession_026ce9d0,PTR_s_sharedInstance_0269cd30);
        _objc_retainAutoreleasedReturnValue();
        local_40 = 1;
        local_38 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_category_026ab3d8);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        bVar1 = false;
        if (((ulong)puVar3 & 1) != 0) {
          puVar3 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_categoryOptions_026ab3e0);
          bVar1 = ((ulong)puVar3 & local_40) == local_40;
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_41 = bVar1;
        if (!bVar1) {
          local_50 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_setCategory_withOptions_error__026a8eb8,
                     *(undefined8 *)PTR__AVAudioSessionCategoryPlayback_025784b8,local_40,&local_50)
          ;
          _objc_storeStrong(&local_30,local_50);
        }
        local_58 = 0;
        local_60 = 0;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setActive_error__026a8ec0,1,&local_60);
        _objc_storeStrong(&local_58,local_60);
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_startSilentHoldIfNeeded_026b0018);
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scheduleHoldSafety_026b0020);
        local_11 = 1;
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_38,0);
        _objc_storeStrong(&local_30,0);
      }
    }
    else {
      local_11 = 0;
    }
  }
  else {
    local_11 = 0;
  }
  return local_11 & 1;
}

