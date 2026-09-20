// FUN_007b5980 @ 007b5980

void FUN_007b5980(undefined8 param_1)

{
  ulong uVar1;
  ulong local_40;
  undefined4 local_34;
  ulong local_30 [3];
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  FUN_007bd15c(local_18);
  uVar1 = local_18;
  _objc_getAssociatedObject(local_18,DAT_026f4658);
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = uVar1;
  if (uVar1 == 0) {
    _objc_setAssociatedObject(local_18,DAT_026f4698,0,1);
    _objc_setAssociatedObject(local_18,DAT_026f46a0,0,1);
    _objc_setAssociatedObject(local_18,DAT_026f4660,0,1);
    local_34 = 1;
  }
  else {
    uVar1 = local_18;
    _objc_getAssociatedObject(local_18,DAT_026f4698);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (uVar1 != 0) {
      uVar1 = local_18;
      FUN_007bd1f4();
      _objc_retainAutoreleasedReturnValue();
      local_40 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_removeBannerBtn__026a8320);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_removeBannerBtn__026a8320,local_30[0]);
      }
      _objc_storeStrong(&local_40,0);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_removeFromSuperview_026ca800);
    _objc_setAssociatedObject(local_18,DAT_026f4698,0,1);
    _objc_setAssociatedObject(local_18,DAT_026f46a0,0,1);
    _objc_setAssociatedObject(local_18,DAT_026f4660,0,1);
    local_34 = 0;
  }
  _objc_storeStrong(local_30);
  _objc_storeStrong(&local_18,0);
  return;
}

