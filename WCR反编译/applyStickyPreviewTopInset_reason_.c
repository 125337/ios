// applyStickyPreviewTopInset:reason: @ 01eba7d0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x20 bytes */

void WCRefineToDoListSettingsViewController::applyStickyPreviewTopInset_reason_
               (ID param_1,SEL param_2,double param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  double dVar3;
  double dVar4;
  undefined8 in_d1;
  double dVar5;
  double dVar6;
  double in_d2;
  double in_d3;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_1c0;
  ID local_48 [2];
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_48[1] = 0;
  local_38 = param_3;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(local_48 + 1,param_4);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_manager_026a5390);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_48[0] = IVar2;
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if (local_48[0] != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_contentInset_0269dcc8);
    dVar3 = ABS(param_3 - local_38);
    dVar5 = 0.5;
    if (0.5 < dVar3) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_contentOffset_0269dd18);
      local_2b8 = local_38 - param_3;
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_setContentInset__0269e770);
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_scrollIndicatorInsets_0269e880);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,in_d1,local_48[0],PTR_s_setScrollIndicatorInsets__0269e778);
      local_2b8 = dVar5 - local_2b8;
      dVar4 = -local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_bounds_026ca548);
      dVar6 = 1.0;
      local_1c0 = dVar4;
      if (1.0 < in_d3) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_contentSize_026ca5a0);
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_contentInset_0269dcc8);
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_bounds_026ca548);
        in_d3 = (dVar6 + in_d2) - in_d3;
        local_2b0 = dVar4;
        if (dVar4 < in_d3) {
          local_2b0 = in_d3;
        }
        local_1c0 = local_2b0;
      }
      if (local_2b8 < dVar4) {
        local_2b8 = dVar4;
      }
      local_2c0 = local_1c0;
      if (local_2b8 < local_1c0) {
        local_2c0 = local_2b8;
      }
      if (0.5 < ABS(local_2c0 - dVar5) || 0.5 < ABS(dVar3 - dVar3)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar3,local_2c0,local_48[0],PTR_s_setContentOffset_animated__0269ddd8,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_scrollIndicatorInsets_0269e880);
      if (0.5 < ABS(dVar3 - local_38)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,dVar5,in_d2,in_d3,local_48[0],PTR_s_setScrollIndicatorInsets__0269e778);
      }
    }
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(local_48 + 1,0);
  return;
}

