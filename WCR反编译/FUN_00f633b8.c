// FUN_00f633b8 @ 00f633b8

byte FUN_00f633b8(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
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
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_30;
    local_30 = uVar1;
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_30;
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar3 & 1) == 0) {
      _objc_storeStrong(&local_30,0);
    }
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf__chatroom_);
    if (((uVar3 & 1) == 0) &&
       (uVar3 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasSuffix__0269d018,&cf___chatroom),
       (uVar3 & 1) == 0)) {
      uVar3 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__chatroom);
      if ((uVar3 & 1) == 0) {
        uVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isChatroom_0269e248);
        if ((uVar3 & 1) == 0) {
          local_11 = 0;
        }
        else {
          uVar3 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isChatroom_0269e248);
          local_11 = (byte)uVar3 & 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 0;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

