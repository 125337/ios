// FUN_0043729c @ 0043729c

byte FUN_0043729c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  byte local_6c;
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
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_delegate_0269d0e0);
    if ((uVar1 & 1) != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_delegate_0269d0e0);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    pcVar3 = "ForwardMessageLogicController";
    _objc_getClass();
    local_6c = 0;
    if ((pcVar3 != (char *)0x0) && (local_6c = 0, local_30 != 0)) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar3);
      local_6c = (byte)uVar1;
    }
    local_11 = local_6c & 1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

