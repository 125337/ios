// FUN_000f96f8 @ 000f96f8

byte FUN_000f96f8(double param_1,double param_2,double param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double local_178;
  long local_30;
  bool local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if (local_30 == 0) {
    local_21 = false;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_adjustedContentInset_0269dcd0);
    local_178 = -param_1;
    dVar1 = local_178;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentSize_026ca5a0);
    dVar2 = param_3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    _CGRectGetHeight(dVar2,dVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_adjustedContentInset_0269dcd0);
    param_2 = (param_3 - dVar2) + param_2;
    if (local_178 < param_2) {
      local_178 = param_2;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentOffset_0269dd18);
    local_21 = 40.0 < local_178 - param_2;
  }
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

