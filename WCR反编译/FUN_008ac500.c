// FUN_008ac500 @ 008ac500

byte FUN_008ac500(undefined8 param_1)

{
  ulong uVar1;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = false;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_IsUnPlayed_026a99b0);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_uiStatus_026a7ab8);
      if ((uVar1 & 1) == 0) {
        local_11 = true;
      }
      else {
        uVar1 = local_20;
        FUN_008ab57c(local_20,PTR_s_m_uiStatus_026a7ab8);
        local_11 = (int)uVar1 == 3;
      }
    }
    else {
      uVar1 = local_20;
      FUN_008ab47c(local_20,PTR_s_IsUnPlayed_026a99b0);
      local_11 = (bool)((byte)uVar1 & 1);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

