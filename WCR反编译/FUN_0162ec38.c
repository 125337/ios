// FUN_0162ec38 @ 0162ec38

byte FUN_0162ec38(ulong param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  uint local_64;
  ulong local_30;
  undefined *local_28;
  ulong local_20;
  byte local_11;
  
  FUN_01633290();
  local_28 = PTR_s_sharedRecorder_026b1aa0;
  if ((param_1 == 0) ||
     (local_20 = param_1,
     (*(code *)PTR__objc_msgSend_02578628)
               (param_1,PTR_s_respondsToSelector__026ca818,PTR_s_sharedRecorder_026b1aa0),
     (param_1 & 1) == 0)) {
    local_11 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 != 0) {
      pcVar2 = &cf_isRecording;
      _NSSelectorFromString();
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
      local_64 = 0;
      if ((uVar1 & 1) != 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar2);
        local_64 = (uint)uVar1;
      }
      if ((local_64 & 1) == 0) {
        pcVar2 = &cf_isAvailable;
        _NSSelectorFromString();
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
        if (((uVar1 & 1) != 0) &&
           (uVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,pcVar2),
           (uVar1 & 1) != 0)) {
          pcVar2 = &cf_startRecordingWithMicrophoneEnabled_handler_;
          _NSSelectorFromString();
          uVar1 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
          if ((uVar1 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,pcVar2,1,&PTR___NSConcreteGlobalBlock_02587860);
          }
        }
      }
      else {
        pcVar2 = &cf_stopRecordingWithHandler_;
        _NSSelectorFromString();
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_respondsToSelector__026ca818,pcVar2);
        if ((uVar1 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,pcVar2,&PTR___NSConcreteGlobalBlock_02587840);
        }
      }
    }
    local_11 = 1;
    _objc_storeStrong(&local_30,0);
  }
  return local_11 & 1;
}

