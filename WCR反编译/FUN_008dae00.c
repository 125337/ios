// FUN_008dae00 @ 008dae00

void FUN_008dae00(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  uint local_9c;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  FUN_008d90b4();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineVoicePackStore_026cea20;
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isSupportedAudioExtension__026a9d50);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_30;
  if (((ulong)puVar2 & 1) == 0) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    puVar2 = PTR_WCRefineVoicePackStore_026cea20;
    local_9c = 0;
    if (lVar1 != 0) {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pathExtension_0269e090);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isSupportedAudioExtension__026a9d50);
      local_9c = (uint)puVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    if ((local_9c & 1) == 0) {
      lVar1 = local_28;
      FUN_008dc7f8();
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar1;
    }
    else {
      lVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_18 = lVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

