// FUN_01f804f4 @ 01f804f4

void FUN_01f804f4(long param_1)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_60;
  undefined *local_58 [4];
  undefined8 local_38;
  uint local_2c;
  long local_28;
  long local_20;
  long local_18;
  
  lVar2 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  local_28 = lVar2;
  if (lVar2 == 0) {
    local_2c = 1;
  }
  else {
    if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
      lVar2 = *(long *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
      if (lVar2 != 0) {
        local_38 = 0;
        puVar3 = PTR__OBJC_CLASS___AVAudioSession_026ce9d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___AVAudioSession_026ce9d0,PTR_s_sharedInstance_0269cd30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___AVAudioSession_026ce9d0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___AVAudioSession_026ce9d0,PTR_s_sharedInstance_0269cd30);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar3 = PTR__OBJC_CLASS___AVAudioPlayer_026ceb18;
        _objc_alloc();
        puVar4 = PTR__OBJC_CLASS___NSURL_026ce328;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,
                   *(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar3,PTR_s_initWithContentsOfURL_error__026ab408,puVar4,&local_60);
        _objc_storeStrong(&local_38,local_60);
        local_58[0] = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        bVar1 = local_58[0] != (undefined *)0x0;
        if (bVar1) {
          lVar2 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_previewPlayer_026c9508);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar2);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setPreviewPlayer__026c9520,local_58[0]);
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_prepareToPlay_026ab418);
          (*(code *)PTR__objc_msgSend_02578628)(local_58[0],PTR_s_play_0269f2b0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__T1Y_);
        }
        local_2c = (uint)!bVar1;
        _objc_storeStrong(local_58);
        _objc_storeStrong(&local_38,0);
        goto LAB_01f80860;
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_<h_el,T);
    local_2c = 1;
  }
LAB_01f80860:
  _objc_storeStrong(&local_28,0);
  return;
}

