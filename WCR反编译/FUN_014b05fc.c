// FUN_014b05fc @ 014b05fc

int FUN_014b05fc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  int local_44;
  ulong local_30;
  int local_28;
  undefined4 local_24;
  ulong local_20;
  int local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_14 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_014b054c(local_20,PTR_s_m_uiAppMsgInnerType_026a14f0);
    local_28 = (int)uVar1;
    if (local_28 == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsContent_0269d0a0);
      if ((uVar1 & 1) == 0) {
        local_14 = 0;
        local_24 = 1;
      }
      else {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_nsContent_0269d0a0);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_30 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
        if ((uVar1 & 1) == 0) {
          local_14 = 0;
        }
        else {
          uVar1 = local_30;
          FUN_014b1e94();
          if ((long)uVar1 < 1) {
            local_44 = 0;
          }
          else {
            local_44 = (int)uVar1;
          }
          local_14 = local_44;
        }
        local_24 = 1;
        _objc_storeStrong(&local_30,0);
      }
    }
    else {
      local_24 = 1;
      local_14 = local_28;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

