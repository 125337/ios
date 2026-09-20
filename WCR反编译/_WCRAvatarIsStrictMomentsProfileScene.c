// _WCRAvatarIsStrictMomentsProfileScene @ 0093933c

byte _WCRAvatarIsStrictMomentsProfileScene
               (undefined8 param_1,undefined8 param_2,byte param_3,byte param_4,byte param_5)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  bool local_41;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined4 local_30;
  byte local_2b;
  byte local_2a;
  byte local_29;
  cfstringStruct *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  local_2b = param_5;
  local_2a = param_4;
  local_29 = param_3;
  if ((param_5 & 1) == 0) {
    if (((param_3 & 1) == 0) && ((param_4 & 1) == 0)) {
      local_11 = 0;
      local_30 = 1;
    }
    else {
      uVar1 = local_20;
      _WCRAvatarIsMomentsProfileResponderScene();
      if ((uVar1 & 1) == 0) {
        local_41 = local_28 == (cfstringStruct *)0x0;
        if (local_41) {
          local_68 = &cf___;
        }
        else {
          local_68 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_40 = local_68;
        }
        local_41 = !local_41;
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = local_68;
        if (local_41) {
          (*(code *)PTR__objc_release_02578630)(local_40);
        }
        pcVar2 = local_38;
        _WCRAvatarIsMomentsProfileVCClassName();
        local_11 = (byte)pcVar2 & 1;
        local_30 = 1;
        _objc_storeStrong(&local_38,0);
      }
      else {
        local_11 = 1;
        local_30 = 1;
      }
    }
  }
  else {
    local_11 = 1;
    local_30 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

