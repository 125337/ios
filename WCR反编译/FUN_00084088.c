// FUN_00084088 @ 00084088

byte FUN_00084088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 uint param_5)

{
  ulong uVar1;
  long lVar2;
  ulong local_38;
  long local_30;
  long local_28;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  if ((local_20 == 0) && ((param_5 & 1) == 0)) {
    if ((local_28 == 0) || (local_30 == 0)) {
      local_11 = 0;
    }
    else {
      uVar1 = local_38;
      FUN_0007f214();
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,_WCRAvatarSceneMyProfile);
        if ((uVar1 & 1) == 0) {
          lVar2 = local_28;
          FUN_0007f2f4(local_28,local_30);
          _objc_retainAutoreleasedReturnValue();
          local_11 = lVar2 == 0;
          (*(code *)PTR__objc_release_02578630)();
        }
        else {
          local_11 = 0;
        }
      }
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

