// maximumOffsetY @ 00066f18

/* Function Stack Size: 0x10 bytes */

double WCRAutoScrollDriver::maximumOffsetY(ID param_1,SEL param_2)

{
  double dVar1;
  double in_d1;
  double dVar2;
  double in_d2;
  double dVar3;
  undefined8 in_d3;
  double local_e0;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_18 = 0.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_contentInset_0269dcc8);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_adjustedContentInset_0269dcd0);
    dVar3 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_contentSize_026ca5a0);
    dVar1 = in_d1;
    dVar2 = in_d1;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
    _CGRectGetHeight(dVar1,dVar2,dVar3,in_d3);
    in_d2 = (in_d1 - dVar1) + in_d2;
    local_e0 = in_d2;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_minimumOffsetY_0269dcd8);
    if (local_e0 < in_d2) {
      local_e0 = in_d2;
    }
    local_18 = local_e0;
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

