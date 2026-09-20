// FUN_01f5ca08 @ 01f5ca08

void FUN_01f5ca08(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  undefined8 uVar5;
  cfstringStruct *local_d0;
  cfstringStruct *local_98;
  undefined *local_58;
  cfstringStruct *local_50;
  undefined *local_48;
  cfstringStruct *local_40;
  int local_34;
  long local_30;
  cfstringStruct *local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_hideWeToast__0269cec0,*(undefined8 *)(param_1 + 0x20)
            );
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_98 = &cf__gw;
    }
    else {
      local_98 = local_28;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x28),PTR_s_showResultTitle_message__026c94c8,&cf__T1Y_,
               local_98);
    local_34 = 1;
  }
  else {
    local_40 = (cfstringStruct *)0x0;
    puVar2 = PTR__OBJC_CLASS___AVAudioPlayer_026ceb18;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithContentsOfURL_error__026ab408,puVar3,&local_50);
    _objc_storeStrong(&local_40,local_50);
    local_48 = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    if (local_48 == (undefined *)0x0) {
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_localizedDescription_0269ced0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = pcVar4;
      if (pcVar4 == (cfstringStruct *)0x0) {
        local_d0 = &cf_eld>eTb;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,PTR_s_showResultTitle_message__026c94c8,&cf__T1Y_,local_d0);
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      local_34 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_stopPreview_026c9510);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setDelegate__026ca910,*(undefined8 *)(param_1 + 0x28));
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_setPreviewPlayer__026c9520,local_48);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_setPreviewingModelId__026c9528,
                 *(undefined8 *)(param_1 + 0x30));
      puVar2 = PTR__OBJC_CLASS___AVAudioSession_026ce9d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___AVAudioSession_026ce9d0,PTR_s_sharedInstance_0269cd30);
      _objc_retainAutoreleasedReturnValue();
      local_58 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_setCategory_error__026c7400,
                 *(undefined8 *)PTR__AVAudioSessionCategoryPlayback_025784b8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setActive_error__026a8ec0,1,0);
      _objc_storeStrong(&local_58,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_prepareToPlay_026ab418);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_play_0269f2b0);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadTableData_0269dca8);
      local_34 = 0;
    }
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_40,0);
    if (local_34 == 0) {
      local_34 = 0;
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

