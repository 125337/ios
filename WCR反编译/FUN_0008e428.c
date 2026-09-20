// FUN_0008e428 @ 0008e428

byte FUN_0008e428(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  byte local_3c;
  ulong local_20;
  byte local_11;
  ulong *puVar2;
  
  puVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  FUN_00079024();
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar3 = local_20;
    _WCRAvatarIsChatPageController();
    local_3c = 1;
    if ((uVar3 & 1) == 0) {
      uVar3 = local_20;
      _WCRAvatarIsMyProfileController();
      local_3c = 1;
      if ((uVar3 & 1) == 0) {
        uVar3 = local_20;
        _WCRAvatarIsFriendProfileController();
        local_3c = 1;
        if ((uVar3 & 1) == 0) {
          uVar3 = local_20;
          _WCRAvatarIsMomentsProfileController();
          local_3c = (byte)uVar3;
        }
      }
    }
    local_11 = local_3c & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

