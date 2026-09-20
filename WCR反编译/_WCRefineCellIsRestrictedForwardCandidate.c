// _WCRefineCellIsRestrictedForwardCandidate @ 014b08d8

byte _WCRefineCellIsRestrictedForwardCandidate(undefined8 param_1)

{
  ulong uVar1;
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_014b0a60();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  _WCRefineWrapIsRestrictedForwardCandidate();
  if ((uVar1 & 1) == 0) {
    if ((local_20 == 0) ||
       (uVar1 = local_28, FUN_014b054c(local_28,PTR_s_m_uiMessageType_0269d0a8), (int)uVar1 != 0x31)
       ) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      local_38 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_containsString__0269d0b0,&cf_AppRecord);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_AppNote),
         (uVar1 & 1) == 0)) {
        uVar1 = local_28;
        FUN_014b0794();
        local_11 = (byte)uVar1 & 1;
      }
      else {
        local_11 = 1;
      }
      local_2c = 1;
      _objc_storeStrong(&local_38,0);
    }
  }
  else {
    local_11 = 1;
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

