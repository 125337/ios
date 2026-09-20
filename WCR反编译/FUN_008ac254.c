// FUN_008ac254 @ 008ac254

byte FUN_008ac254(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  byte local_b0;
  ulong local_40;
  undefined4 local_38;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_6);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_IsUnPlayed_026a99b0);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    FUN_008ac90c(local_20,"m_unreadImageView");
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    if (uVar1 == 0) {
      uVar1 = local_28;
      FUN_008ac500();
      local_b0 = (byte)uVar1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isHidden_026ca768);
      local_b0 = 0;
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_alpha_026ca4d8);
        local_b0 = 0;
        if (DAT_02323d38 < param_1) {
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
          local_b0 = (byte)uVar1;
          FUN_008aca5c(param_3,param_4,*(undefined8 *)PTR__CGSizeZero_025782f8,
                       *(undefined8 *)(PTR__CGSizeZero_025782f8 + 8));
          local_b0 = local_b0 ^ 1;
        }
      }
    }
    local_11 = local_b0 & 1;
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    uVar1 = local_28;
    FUN_008ab47c(local_28,PTR_s_IsUnPlayed_026a99b0);
    local_11 = (byte)uVar1 & 1;
    local_38 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

