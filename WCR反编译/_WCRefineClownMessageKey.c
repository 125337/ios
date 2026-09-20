// _WCRefineClownMessageKey @ 00f15688

void _WCRefineClownMessageKey(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulong local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (undefined *)0x0;
    local_24 = 1;
  }
  else {
    local_28 = 0;
    local_30 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiMesLocalID_0269d238);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiMesLocalID_0269d238);
      local_28 = (undefined4)uVar1;
    }
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_n64MesSvrID_0269d3e0);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_n64MesSvrID_0269d3e0);
      local_30 = uVar1;
    }
    uVar1 = local_20;
    FUN_00f16e8c();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      local_18 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____u__lld
                );
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar2;
    }
    local_24 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

