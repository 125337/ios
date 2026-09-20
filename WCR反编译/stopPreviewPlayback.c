// stopPreviewPlayback @ 01f8c82c

/* Function Stack Size: 0x10 bytes */

void WCRefineVoicePackPickerViewController::stopPreviewPlayback(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewPlayer_026c9508);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_previewPlayer_026c9508);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPreviewPlayer__026c9520,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPreviewingPath__026c9b50,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rebuildListSections_026ba410);
  return;
}

