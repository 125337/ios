// _WCRefineIsTransferMessageWrap @ 00f15f00

byte _WCRefineIsTransferMessageWrap(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_54;
  ulong local_50;
  int local_44;
  ulong local_40;
  ulong local_38;
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
    uVar1 = local_20;
    FUN_00f161b0();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar1;
    FUN_00f16348(uVar1,PTR_s_m_c2cNativeUrl_0269d798);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_30;
    local_38 = uVar1;
    FUN_00f164a8(local_30,PTR_s_m_uiPaySubType_0269d6e8);
    uVar1 = local_38;
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_hasPrefix__0269d320,&cf_wxpay___c2ctransfer);
    if (((uVar1 & 1) == 0) && (local_40 != 1)) {
      local_44 = 0;
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMessageType_0269d0a8);
      if ((uVar1 & 1) != 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMessageType_0269d0a8);
        local_44 = (int)uVar1;
      }
      if (local_44 == 0x31) {
        uVar1 = local_20;
        FUN_00f16348(local_20,PTR_s_m_nsContent_0269d0a0);
        _objc_retainAutoreleasedReturnValue();
        local_50 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_<transfer);
        local_54 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_50,PTR_s_containsString__0269d0b0,&cf_transfer_id);
          local_54 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_50,PTR_s_containsString__0269d0b0,&cf_feedesc);
            local_54 = (byte)uVar1;
          }
        }
        local_11 = local_54 & 1;
        local_24 = 1;
        _objc_storeStrong(&local_50,0);
      }
      else {
        local_11 = 0;
        local_24 = 1;
      }
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

