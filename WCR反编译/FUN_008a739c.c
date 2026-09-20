// FUN_008a739c @ 008a739c

byte FUN_008a739c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  FUN_008a47c0(local_20,PTR_s_canShowLivePhotoBtn_026a98c0,0);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getImageScrollView_026a98a8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    local_11 = false;
    local_38 = uVar2;
    if (uVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getImage_026a98c8);
      local_11 = false;
      if ((uVar2 & 1) != 0) {
        local_40 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_getImage_026a98c8);
        _objc_retainAutoreleasedReturnValue();
        bVar1 = true;
        local_11 = local_40 != 0;
      }
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_40);
    }
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

