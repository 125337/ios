// audioPlayerDidFinishPlaying:successfully: @ 01f8d728

/* Function Stack Size: 0x1c bytes */

void WCRefineVoicePackPickerViewController::audioPlayerDidFinishPlaying_successfully_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  ID IVar1;
  ID IVar2;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_28;
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_previewPlayer_026c9508);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 == IVar2) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_stopPreviewPlayback_026c9be0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

