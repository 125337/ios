// FUN_014b24b0 @ 014b24b0

byte FUN_014b24b0(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  ulong local_40;
  ulong local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar4 = local_20;
  FUN_014b054c(local_20,PTR_s_m_uiMessageType_0269d0a8);
  if ((int)uVar4 != 0x31) {
    local_11 = 0;
    goto LAB_014b26dc;
  }
  uVar4 = local_20;
  FUN_014b05fc(0);
  if (((int)uVar4 == 0x21) || (iVar2 = (int)uVar4 + -0x24, iVar2 == 0)) {
    local_11 = 1;
    goto LAB_014b26dc;
  }
  uVar4 = local_20;
  FUN_014b26fc(iVar2);
  if ((uVar4 & 1) != 0) {
    local_11 = 1;
    goto LAB_014b26dc;
  }
  uVar4 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_oWAAppItem_026af448);
  bVar3 = false;
  bVar1 = false;
  if ((uVar4 & 1) == 0) {
LAB_014b25fc:
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_openSDKAppBrandItem_026af450);
    local_11 = false;
    bVar1 = (uVar4 & 1) != 0;
    if (bVar1) {
      local_40 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_openSDKAppBrandItem_026af450);
      _objc_retainAutoreleasedReturnValue();
      local_11 = local_40 != 0;
    }
  }
  else {
    local_30 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_oWAAppItem_026af448);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = true;
    local_11 = true;
    if (local_30 == 0) goto LAB_014b25fc;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
LAB_014b26dc:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

