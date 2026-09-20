// FUN_0007a50c @ 0007a50c

byte FUN_0007a50c(undefined8 param_1,ulong *param_2,ulong *param_3,byte *param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_68 [3];
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  byte *local_38;
  ulong *local_30;
  ulong *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  if (local_20 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = uVar2;
    FUN_00071ca0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_48;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_window_026cabf0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = local_50 == 0;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    if (uVar3 == 0 && bVar1) {
      local_11 = 0;
      local_3c = 1;
    }
    else {
      uVar2 = local_48;
      FUN_00077d80(local_48,local_50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_68[0] = uVar2;
      _WCRAvatarIsFriendProfileController();
      if ((uVar3 & 1) != 0) {
        _objc_storeStrong(local_68,_WCRAvatarSceneFriendProfile);
      }
      uVar2 = local_50;
      if (local_28 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_28 = uVar2;
      }
      uVar2 = local_68[0];
      if (local_30 != (ulong *)0x0) {
        _objc_retainAutorelease();
        *local_30 = uVar2;
      }
      if (local_38 != (byte *)0x0) {
        *local_38 = (byte)uVar3 & 1;
      }
      local_11 = 1;
      local_3c = 1;
      _objc_storeStrong(local_68,0);
    }
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

