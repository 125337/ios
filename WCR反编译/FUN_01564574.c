// FUN_01564574 @ 01564574

byte FUN_01564574(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
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
    FUN_01533df4(local_20,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (uVar1 == 0) {
      uVar2 = local_20;
      FUN_01533eb8(local_20,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_30;
      local_30 = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar1 = local_30;
    FUN_01565254();
    if ((uVar1 & 1) == 0) {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf__chatroom);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        FUN_01533f64(local_20,PTR_s_isChatroom_0269e248,0);
        local_11 = (byte)uVar1 & 1;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 0;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

