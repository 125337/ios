// FUN_00785dec @ 00785dec

byte FUN_00785dec(double param_1,undefined8 param_2,double param_3,double param_4,undefined8 param_5
                 )

{
  ulong uVar1;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_5);
  if (((local_20 == 0) ||
      (uVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isHidden_026ca768),
      (uVar1 & 1) != 0)) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_alpha_026ca4d8), param_1 < DAT_02323e60))
  {
    local_11 = true;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
    local_11 = true;
    if (6.0 <= param_3) {
      local_11 = param_4 < 6.0;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

