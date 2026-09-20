// FUN_00860a34 @ 00860a34

byte FUN_00860a34(double param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong local_40;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  FUN_0081f6b4(local_20,0);
  _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  local_11 = false;
  local_28 = uVar2;
  if (uVar2 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isHidden_026ca768);
    local_11 = false;
    if ((uVar2 & 1) == 0) {
      local_40 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_image_026ca678);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_11 = false;
      if (local_40 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_alpha_026ca4d8);
        local_11 = DAT_02323d38 < param_1;
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

