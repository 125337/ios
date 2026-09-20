// FUN_0043afb0 @ 0043afb0

byte FUN_0043afb0(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  uint local_3c;
  ulong local_38 [3];
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_getChatUsername_0269d2b8);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_getChatUsername_0269d2b8);
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = uVar2;
    FUN_004501a0();
    bVar1 = (uVar2 & 1) != 0;
    if (bVar1) {
      local_11 = 1;
    }
    local_3c = (uint)bVar1;
    _objc_storeStrong(local_38,0);
    if (local_3c != 0) goto LAB_0043b4d4;
  }
  uVar2 = local_20;
  FUN_0043b6d0();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar2;
  if (uVar2 == 0) {
    uVar3 = local_20;
    FUN_0043ade8();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    FUN_0043bbe4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_48 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  if ((local_48 == 0) &&
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_GetCurrentViewController_0269d2d0)
     , (uVar2 & 1) != 0)) {
    uVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_GetCurrentViewController_0269d2d0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar3;
    FUN_0043bbe4();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_48 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_storeStrong(&local_50,0);
  }
  local_58 = 0;
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_GetContact_0269d2c0);
  if ((uVar2 & 1) != 0) {
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_GetContact_0269d2c0);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_58;
    local_58 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  if (local_58 == 0) {
    local_11 = 0;
    local_3c = 1;
  }
  else {
    local_60 = 0;
    uVar3 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_60;
    local_60 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    uVar2 = local_60;
    FUN_004501a0();
    if ((uVar2 & 1) == 0) {
      uVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_isChatroom_0269e248);
      if ((uVar2 & 1) == 0) {
        local_11 = 0;
      }
      else {
        uVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isChatroom_0269e248);
        local_11 = (byte)uVar2 & 1;
      }
    }
    else {
      local_11 = 1;
    }
    local_3c = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_48,0);
LAB_0043b4d4:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

