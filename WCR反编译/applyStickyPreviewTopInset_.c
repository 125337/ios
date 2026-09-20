// applyStickyPreviewTopInset: @ 01cd340c

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineProfileCardBeautifyViewController::applyStickyPreviewTopInset_
               (ID param_1,SEL param_2,double param_3)

{
  ID IVar1;
  double dVar2;
  double dVar3;
  undefined8 in_d1;
  double dVar4;
  double dVar5;
  double in_d2;
  double in_d3;
  double local_2a0;
  double local_298;
  double local_290;
  double local_1b0;
  ID local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_40 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentInset_0269dcc8);
    dVar2 = ABS(param_3 - local_38);
    dVar4 = 0.5;
    if (dVar2 <= 0.5) {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scrollIndicatorInsets_0269e880);
      if (0.5 < ABS(dVar2 - local_38)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,dVar4,in_d2,in_d3,local_40,PTR_s_setScrollIndicatorInsets__0269e778);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentOffset_0269dd18);
      local_298 = local_38 - param_3;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setContentInset__0269e770);
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_scrollIndicatorInsets_0269e880);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,in_d1,local_40,PTR_s_setScrollIndicatorInsets__0269e778);
      local_298 = dVar4 - local_298;
      dVar3 = -local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
      dVar5 = 1.0;
      local_1b0 = dVar3;
      if (1.0 < in_d3) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentSize_026ca5a0);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_contentInset_0269dcc8);
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
        in_d3 = (dVar5 + in_d2) - in_d3;
        local_290 = dVar3;
        if (dVar3 < in_d3) {
          local_290 = in_d3;
        }
        local_1b0 = local_290;
      }
      if (local_298 < dVar3) {
        local_298 = dVar3;
      }
      if (local_1b0 <= local_298) {
        local_2a0 = local_1b0;
      }
      else {
        local_2a0 = local_298;
      }
      if ((0.5 < ABS(local_2a0 - dVar4)) || (0.5 < ABS(dVar2 - dVar2))) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar2,local_2a0,local_40,PTR_s_setContentOffset_animated__0269ddd8,0);
      }
    }
  }
  _objc_storeStrong(&local_40,0);
  return;
}

