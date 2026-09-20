// FUN_000f9ecc @ 000f9ecc

void FUN_000f9ecc(undefined8 param_1,double param_2,double param_3,undefined8 param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double local_268;
  double local_260;
  double local_258;
  long local_38;
  undefined8 local_30;
  double local_28;
  
  local_38 = 0;
  local_30 = param_1;
  local_28 = param_2;
  _objc_storeStrong(&local_38,param_4);
  bVar1 = true;
  dVar5 = param_3;
  if (local_38 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentSize_026ca5a0);
    bVar1 = param_2 < 1.0;
  }
  dVar2 = local_28;
  if (!bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentInset_0269dcc8);
    local_260 = (dVar2 + dVar5) - param_3;
    local_268 = local_260;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_adjustedContentInset_0269dcd0);
    local_268 = -local_268;
    dVar2 = local_268;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentSize_026ca5a0);
    dVar3 = dVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    _CGRectGetHeight(dVar3,dVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_adjustedContentInset_0269dcd0);
    param_3 = (dVar5 - dVar3) + param_3;
    local_258 = local_268;
    if (local_268 < param_3) {
      local_258 = param_3;
    }
    if (local_258 <= local_260) {
      local_260 = local_258;
    }
    if (local_268 < local_260) {
      local_268 = local_260;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentOffset_0269dd18);
    if (0.5 < ABS(local_260 - local_268)) {
      uVar4 = local_30;
      FUN_000fa79c();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,local_268,local_38,PTR_s_setContentOffset__0269e780);
    }
  }
  _objc_storeStrong(&local_38,0);
  return;
}

