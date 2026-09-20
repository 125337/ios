// FUN_001eca1c @ 001eca1c

byte FUN_001eca1c(double param_1,double param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  double dVar1;
  ulong uVar2;
  double dVar3;
  ulong local_20;
  bool local_11;
  
  dVar1 = DAT_02323d38;
  local_20 = 0;
  _objc_storeStrong(&local_20,param_3);
  uVar2 = local_20;
  dVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_masksToBounds_0269e158);
  if ((uVar2 & 1) == 0) {
    local_11 = false;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cornerRadius_026ca5c8);
    dVar3 = ABS(dVar3 - param_1);
    if (dVar3 <= dVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_borderWidth_0269e060);
      if (ABS(dVar3 - param_2) <= dVar1) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_maskedCorners_0269fc50);
        if (uVar2 == param_4) {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_borderColor_0269e050);
          if ((uVar2 == 0) || (param_5 == 0)) {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_borderColor_0269e050);
            local_11 = uVar2 == param_5;
          }
          else {
            uVar2 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_borderColor_0269e050);
            _CGColorEqualToColor(uVar2,param_5);
            local_11 = (bool)((byte)uVar2 & 1);
          }
        }
        else {
          local_11 = false;
        }
      }
      else {
        local_11 = false;
      }
    }
    else {
      local_11 = false;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

