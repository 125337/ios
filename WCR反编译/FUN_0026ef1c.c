// FUN_0026ef1c @ 0026ef1c

byte FUN_0026ef1c(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsFileMsg_0269da48);
    if (((uVar2 & 1) == 0) ||
       (uVar2 = local_20, FUN_0026ee10(local_20,PTR_s_IsFileMsg_0269da48), (uVar2 & 1) == 0)) {
      uVar2 = local_20;
      FUN_0026fb04(local_20,PTR_s_m_uiMessageType_0269d0a8);
      if ((int)uVar2 == 0x3e) {
        local_11 = 1;
      }
      else {
        if ((int)uVar2 == 0x31) {
          uVar2 = local_20;
          FUN_0026fb04(local_20,PTR_s_m_uiAppMsgInnerType_026a14f0);
          iVar1 = (int)uVar2;
          if (((iVar1 == 6) || (iVar1 == 0x4a)) || (iVar1 == 8)) {
            local_11 = 1;
            goto LAB_0026f0cc;
          }
        }
        local_11 = 0;
      }
    }
    else {
      local_11 = 1;
    }
  }
LAB_0026f0cc:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

