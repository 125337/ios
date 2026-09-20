// FUN_0008e560 @ 0008e560

uint FUN_0008e560(undefined8 param_1)

{
  ulong uVar1;
  uint local_2c;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  _WCRAvatarIsMyProfileController();
  local_2c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_18;
    _WCRAvatarIsFriendProfileController();
    local_2c = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      _WCRAvatarIsMomentsProfileController();
      local_2c = (uint)uVar1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return local_2c & 1;
}

