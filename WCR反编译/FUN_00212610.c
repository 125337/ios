// FUN_00212610 @ 00212610

double FUN_00212610(double param_1,undefined8 param_2)

{
  uint uVar1;
  double local_50;
  double local_30;
  long local_20;
  double local_18;
  long *plVar2;
  
  plVar2 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar2,param_2);
  uVar1 = (uint)plVar2;
  if (local_20 == 0) {
    local_18 = 1.0;
  }
  else {
    FUN_001d6008();
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_msgBannerBgImageAlphaLight_026a07a8);
      local_50 = param_1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_msgBannerBgImageAlphaDark_026a07a0);
      local_50 = param_1;
    }
    local_30 = local_50;
    if (local_50 < 0.0) {
      local_30 = 0.0;
    }
    if (1.0 < local_30) {
      local_30 = 1.0;
    }
    local_18 = local_30;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

