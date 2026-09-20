// FUN_004cbe00 @ 004cbe00

byte FUN_004cbe00(undefined8 param_1)

{
  ulong uVar1;
  double in_d3;
  byte local_4c;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_frame_026ca640);
    local_4c = 1;
    if (in_d3 <= 0.5) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768);
      local_4c = 1;
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8);
        local_4c = 1;
        if (in_d3 <= DAT_02323d38) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isUserInteractionEnabled_026ca770);
          local_4c = (byte)uVar1;
        }
      }
    }
    local_11 = local_4c & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

