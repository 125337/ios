// canTakeOver @ 000670e4

/* Function Stack Size: 0x10 bytes */

bool WCRAutoScrollDriver::canTakeOver(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  double in_d0;
  double dVar3;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  FUN_00067398();
  if ((param_1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    bVar1 = true;
    if (local_30 != 0) {
      IVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_window_026cabf0);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = IVar2 == 0;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (bVar1) {
      local_11 = 0;
    }
    else {
      IVar2 = local_30;
      FUN_00067434();
      if ((IVar2 & 1) == 0) {
        IVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isScrollEnabled_0269dce0);
        if (((IVar2 & 1) == 0) ||
           (IVar2 = local_30,
           (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isPagingEnabled_0269dce8),
           (IVar2 & 1) != 0)) {
          local_11 = 0;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_bounds_026ca548);
          _CGRectGetHeight(in_d0,in_d1,in_d2,in_d3);
          if (120.0 <= in_d0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_maximumOffsetY_0269dcf0);
            dVar3 = in_d0;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_minimumOffsetY_0269dcd8);
            if (1.0 < in_d0 - dVar3) {
              local_11 = 1;
            }
            else {
              local_11 = 0;
            }
          }
          else {
            local_11 = 0;
          }
        }
      }
      else {
        local_11 = 0;
      }
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

