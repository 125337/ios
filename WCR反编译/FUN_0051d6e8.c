// FUN_0051d6e8 @ 0051d6e8

uint FUN_0051d6e8(undefined8 param_1)

{
  ulong uVar1;
  uint local_44;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_0051eac8(local_18,&cf_isLiked);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
  if ((uVar1 & 1) == 0) {
    local_44 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_boolValue_026ca540);
    local_44 = (uint)uVar1;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_44 & 1;
}

