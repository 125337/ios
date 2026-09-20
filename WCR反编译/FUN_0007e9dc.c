// FUN_0007e9dc @ 0007e9dc

void FUN_0007e9dc(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  _WCRAvatarIsMyProfileController();
  uVar1 = _WCRAvatarSceneMyProfile;
  if ((uVar2 & 1) == 0) {
    uVar2 = local_20;
    _WCRAvatarIsFriendProfileController();
    uVar1 = _WCRAvatarSceneFriendProfile;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      _WCRAvatarIsMomentsProfileController();
      local_18 = _WCRAvatarSceneMomentsProfile;
      if ((uVar2 & 1) == 0) {
        local_18 = 0;
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = uVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

