// FUN_0087f240 @ 0087f240

byte FUN_0087f240(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_58;
  undefined1 local_49;
  ulong local_48 [3];
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (((DAT_028cd866 & 1) == 0) || (local_20 == 0)) {
    local_11 = 0;
    local_24 = 1;
    goto LAB_0087f56c;
  }
  uVar2 = local_20;
  FUN_00883768();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar2;
  if (uVar2 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_00883a30();
    _objc_retainAutoreleasedReturnValue();
    local_48[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 == 0) {
      FUN_00883bb0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = local_48[0];
      local_48[0] = uVar2;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
    uVar2 = local_30;
    FUN_00883c74(local_30,local_48[0]);
    if ((uVar2 & 1) == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      uVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_isMyContact_0269ef80);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isMyContact_0269ef80);
        local_49 = (undefined1)uVar2;
        if ((uVar2 & 1) == 0) {
          local_11 = 0;
          local_24 = 1;
          goto LAB_0087f52c;
        }
      }
      FUN_00883e98();
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
      if ((uVar2 == 0) ||
         (uVar2 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_isEqualToString__0269ccc8,local_48[0])
         , (uVar2 & 1) == 0)) {
        local_11 = 1;
      }
      else {
        local_11 = 0;
      }
      local_24 = 1;
      _objc_storeStrong(&local_58,0);
    }
LAB_0087f52c:
    _objc_storeStrong(local_48,0);
  }
  _objc_storeStrong(&local_30,0);
LAB_0087f56c:
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

