// FUN_00ee649c @ 00ee649c

byte FUN_00ee649c(undefined8 param_1)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  FUN_00eeb684(local_20,&cf_m_isInSearchState);
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
  if ((uVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_boolValue_026ca540);
    local_11 = (byte)uVar1 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

