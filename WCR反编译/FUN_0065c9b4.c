// FUN_0065c9b4 @ 0065c9b4

byte FUN_0065c9b4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_e8;
  bool local_79;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  int local_68;
  int local_64;
  ulong local_60;
  ulong local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_30 == 0) && (local_38 == (cfstringStruct *)0x0)) {
    local_21 = 0;
    local_3c = 1;
  }
  else {
    uVar1 = local_30;
    FUN_0065ce3c();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    FUN_0065dd5c();
    local_60 = uVar1;
    if (uVar1 == 0x39) {
      local_21 = 0;
      local_3c = 1;
    }
    else if ((local_30 == 0) ||
            (uVar1 = local_30, FUN_0065e370(local_30,PTR_s_IsFileMsg_0269da48), (uVar1 & 1) == 0)) {
      uVar1 = local_30;
      FUN_0065635c(local_30,PTR_s_m_uiMessageType_0269d0a8);
      local_64 = (int)uVar1;
      uVar1 = local_30;
      FUN_0065635c(local_30,PTR_s_m_uiAppMsgInnerType_026a14f0);
      local_68 = (int)uVar1;
      if (local_64 == 0) {
        uVar1 = local_30;
        FUN_006564b8(local_30,"m_uiMessageType");
        local_64 = (int)uVar1;
      }
      if (local_68 == 0) {
        uVar1 = local_30;
        FUN_006564b8(local_30,"m_uiAppMsgInnerType");
        local_68 = (int)uVar1;
      }
      if ((local_64 == 0x31) && ((local_68 == 6 || (local_68 == 0x82)))) {
        local_21 = 1;
        local_3c = 1;
      }
      else if ((local_60 == 6) || (local_60 == 0x82)) {
        local_21 = 1;
        local_3c = 1;
      }
      else {
        local_79 = local_38 == (cfstringStruct *)0x0;
        if (local_79) {
          local_e8 = &cf___;
        }
        else {
          local_e8 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
          _NSStringFromClass();
          _objc_retainAutoreleasedReturnValue();
          local_78 = local_e8;
        }
        local_79 = !local_79;
        (*(code *)PTR__objc_retain_02578638)();
        local_70 = local_e8;
        if (local_79) {
          (*(code *)PTR__objc_release_02578630)(local_78);
        }
        pcVar2 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_rangeOfString_options__0269d118,&cf_AppFile,1);
        if ((pcVar2 == (cfstringStruct *)0x7fffffffffffffff) ||
           (((local_60 != 0x7fffffffffffffff && (local_60 != 6)) && (local_60 != 0x82)))) {
          local_21 = 0;
        }
        else {
          local_21 = 1;
        }
        local_3c = 1;
        _objc_storeStrong(&local_70,0);
      }
    }
    else {
      local_21 = 1;
      local_3c = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

