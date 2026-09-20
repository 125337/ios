// FUN_00788864 @ 00788864

byte FUN_00788864(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 1;
  }
  else {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
    iVar1 = (int)lVar2;
    if (((iVar1 == 0x3e) || (iVar1 == 10000)) || (iVar1 == 10000)) {
      local_11 = 0;
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

