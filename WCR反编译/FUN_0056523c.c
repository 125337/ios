// FUN_0056523c @ 0056523c

void FUN_0056523c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48 [3];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_commentUserInfo_026a5158);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_commentUserInfo_026a5158);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_30 == 0) {
      uVar2 = local_20;
      FUN_00566368(local_20,&cf_curLongPressedComment);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    if (local_30 == 0) {
      uVar2 = local_20;
      FUN_00566368(local_20,&cf_contentView);
      _objc_retainAutoreleasedReturnValue();
      local_48[0] = uVar2;
      FUN_00566368(uVar2,&cf_userComment);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      _objc_storeStrong(local_48,0);
    }
    uVar1 = local_30;
    FUN_005664ec();
    local_18 = local_30;
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      local_18 = 0;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

