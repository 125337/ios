// FUN_01b035b0 @ 01b035b0

byte FUN_01b035b0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_30;
  uint local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_valueForKey__0269d128,&cf_m_bShowUnReadAsRedDot);
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_boolValue_026ca540);
      local_11 = (byte)uVar2 & 1;
    }
    local_24 = (uint)bVar1;
    _objc_storeStrong(&local_30,0);
    if (local_24 == 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_bShowUnReadAsRedDot_026bd9f0);
      if ((uVar2 & 1) == 0) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_bShowUnReadAsRedDot_026bd9f0);
        local_11 = (byte)uVar2 & 1;
        local_24 = 1;
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

