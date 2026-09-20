// FUN_0156471c @ 0156471c

long FUN_0156471c(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_48;
  uint local_3c;
  ulong local_38;
  long local_30;
  undefined4 local_24;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    uVar1 = local_20;
    FUN_01533f64(local_20,PTR_s_isMMContact_026acbf0,0);
    if ((uVar1 & 1) != 0) {
      local_30 = local_30 + 8;
    }
    uVar1 = local_20;
    FUN_01533df4(local_20,PTR_s_m_nsEncodeUserName_026b05d0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (uVar1 != 0) {
      local_30 = local_30 + 3;
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__stranger);
      if ((uVar1 & 1) != 0) {
        local_30 = local_30 + 4;
      }
    }
    uVar1 = local_20;
    FUN_015623d8(local_20,PTR_s_m_uiFriendScene_026b05f8,0);
    local_3c = (uint)uVar1;
    if (1 < local_3c) {
      local_30 = local_30 + 2;
    }
    uVar1 = local_20;
    FUN_01533df4(local_20,PTR_s_m_nsFriendUserName_026b0600);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
    if (uVar1 != 0) {
      local_30 = local_30 + 1;
    }
    local_18 = local_30;
    local_24 = 1;
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

