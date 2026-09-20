// FUN_006bad9c @ 006bad9c

byte FUN_006bad9c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint local_64;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_40;
  byte local_39;
  ulong local_38;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_39 = 0;
  local_64 = 1;
  if (local_20 != 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_64 = (uint)uVar1 ^ 1;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if ((local_64 & 1) == 0) {
    uVar1 = local_20;
    FUN_006bb1ac(local_20,&cf_ChatRoomInfoViewController);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_viewControllers_0269e348);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_indexOfObjectIdenticalTo__0269e160,local_20)
      ;
      local_58 = uVar1;
      if ((uVar1 == 0x7fffffffffffffff) || (uVar1 == 0)) {
        local_11 = 0;
        local_40 = 1;
      }
      else {
        uVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,uVar1 - 1);
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_class_0269cd60);
        _NSStringFromClass();
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_11 = (byte)uVar1 & 1;
        (*(code *)PTR__objc_release_02578630)(uVar2);
        local_40 = 1;
        _objc_storeStrong(&local_60,0);
      }
      _objc_storeStrong(&local_50);
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_11 = 1;
      local_40 = 1;
    }
  }
  else {
    local_11 = 0;
    local_40 = 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

