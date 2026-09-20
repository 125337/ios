// FUN_01581e3c @ 01581e3c

void FUN_01581e3c(byte param_1)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined *local_20;
  byte local_11;
  
  if ((param_1 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___AVAudioSession_026ce9d0;
    local_11 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___AVAudioSession_026ce9d0,PTR_s_sharedInstance_0269cd30);
    _objc_retainAutoreleasedReturnValue();
    local_28 = 0;
    local_30 = 0;
    local_38 = 0;
    local_20 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_setCategory_withOptions_error__026a8eb8,
               *(undefined8 *)PTR__AVAudioSessionCategoryPlayback_025784b8,1,&local_38);
    _objc_storeStrong(&local_28,local_38);
    local_40 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_setActive_error__026a8ec0,1,&local_40);
    _objc_storeStrong(&local_30,local_40);
    _objc_storeStrong(&local_30,0);
    _objc_storeStrong(&local_28,0);
    _objc_storeStrong(&local_20,0);
  }
  return;
}

