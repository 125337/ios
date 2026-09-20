// FUN_00214240 @ 00214240

double FUN_00214240(undefined8 param_1)

{
  double dVar1;
  uint uVar2;
  double local_60;
  double local_30;
  long local_20;
  double local_18;
  long *plVar3;
  
  dVar1 = DAT_02323dc8;
  plVar3 = &local_20;
  local_20 = 0;
  local_60 = DAT_02323dc8;
  _objc_storeStrong(plVar3,param_1);
  uVar2 = (uint)plVar3;
  if (local_20 == 0) {
    local_18 = 1.0;
  }
  else {
    FUN_001d6008();
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_msgBannerBgImageScaleLight_026a07e8);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_msgBannerBgImageScaleDark_026a07e0);
    }
    local_30 = local_60;
    if (local_60 < dVar1) {
      local_30 = dVar1;
    }
    if (5.0 < local_30) {
      local_30 = 5.0;
    }
    local_18 = local_30;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

