// FUN_002c93b8 @ 002c93b8

byte FUN_002c93b8(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_80;
  bool local_51;
  ulong local_50;
  ulong local_48 [3];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_002ca024();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    if (uVar1 == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      FUN_002ca56c();
      if ((uVar1 & 1) == 0) {
        uVar1 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        local_51 = uVar1 == 0;
        local_48[0] = uVar1;
        if (local_51) {
          local_80 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_topViewController_0269e588);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          FUN_002ca56c();
          local_80 = (byte)uVar2;
          local_50 = uVar1;
        }
        local_51 = !local_51;
        local_11 = local_80 & 1;
        if (local_51) {
          (*(code *)PTR__objc_release_02578630)(local_50);
        }
        local_24 = 1;
        _objc_storeStrong(local_48,0);
      }
      else {
        local_11 = 1;
        local_24 = 1;
      }
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

