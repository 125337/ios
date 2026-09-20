// _WCRefineWrapIsRestrictedForwardCandidate @ 014b0440

byte _WCRefineWrapIsRestrictedForwardCandidate(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    lVar2 = local_20;
    FUN_014b054c(local_20,PTR_s_m_uiMessageType_0269d0a8);
    if ((int)lVar2 == 0x31) {
      lVar2 = local_20;
      FUN_014b05fc(0);
      iVar1 = (int)lVar2;
      if (((iVar1 == 0x11) || (iVar1 == 0x17)) || (iVar1 + -0x28 == 0)) {
        local_11 = 1;
      }
      else {
        lVar2 = local_20;
        FUN_014b0794(iVar1 + -0x28);
        local_11 = (byte)lVar2 & 1;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

