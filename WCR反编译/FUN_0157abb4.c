// FUN_0157abb4 @ 0157abb4

byte FUN_0157abb4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_48;
  ulong local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_28;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar1;
  if ((local_20 == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0), lVar1 == 0)) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    uVar2 = local_20;
    FUN_01528d34();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if ((uVar2 == 0) ||
       (uVar2 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,local_30),
       (uVar2 & 1) == 0)) {
      uVar2 = local_20;
      FUN_01533df4(local_20,PTR_s_m_nsFriendUserName_026b0600);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      FUN_01533bf8();
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar3;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      if ((uVar2 == 0) ||
         (uVar2 = local_48,
         (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_30),
         (uVar2 & 1) == 0)) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
      local_34 = 1;
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_11 = 1;
      local_34 = 1;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

