// FUN_0021ff40 @ 0021ff40

byte FUN_0021ff40(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (local_20 == 0) {
    local_11 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768);
    if (((uVar1 & 1) != 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8), param_1 < DAT_02323e60
       )) {
      local_11 = 1;
    }
    else {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isNavigationBarHidden_026a08a0);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

