// FUN_0088d270 @ 0088d270

byte FUN_0088d270(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  int local_3c;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if ((local_20 == 0) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMessageType_0269d0a8),
     (uVar2 & 1) == 0)) {
    local_11 = false;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
    puVar1 = PTR_s_m_uiAppMsgInnerType_026a14f0;
    if ((int)uVar2 == 0x31) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiAppMsgInnerType_026a14f0);
      if ((uVar2 & 1) == 0) {
        local_11 = false;
      }
      else {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1);
        local_3c = (int)uVar2;
        if ((local_3c == 0) &&
           (uVar2 = local_20,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_ChangeForDisplay_026a91a8),
           (uVar2 & 1) != 0)) {
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_ChangeForDisplay_026a91a8);
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,puVar1);
          local_3c = (int)uVar2;
        }
        local_11 = local_3c == 0x3e;
      }
    }
    else {
      local_11 = false;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

