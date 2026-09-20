// FUN_005c7774 @ 005c7774

void FUN_005c7774(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_005a71f0();
  if ((uVar1 & 1) == 0) {
    local_18 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_livePhotoMediaItem_026a55d8);
    if ((uVar1 & 1) == 0) {
      local_18 = 0;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_livePhotoMediaItem_026a55d8);
      _objc_retainAutoreleasedReturnValue();
      local_18 = uVar1;
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

