// FUN_000faf34 @ 000faf34

byte FUN_000faf34(double param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong local_38;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  bVar1 = false;
  local_11 = false;
  if (local_20 != 0) {
    local_38 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    local_11 = false;
    if (local_38 != 0) {
      uVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768);
      local_11 = false;
      if ((uVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8);
        local_11 = DAT_02323d38 < param_1;
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

