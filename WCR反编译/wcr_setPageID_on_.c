// wcr_setPageID:on: @ 01dc3014

/* Function Stack Size: 0x1c bytes */

void WCRefineSessionStatsLayoutViewController::wcr_setPageID_on_
               (ID param_1,SEL param_2,ID param_3,bool param_4)

{
  long lVar1;
  ID IVar2;
  ID IVar3;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    if ((param_4 & 1) == 0) {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pages_026c52a0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    else {
      IVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pages_026c52a0);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(IVar3);
      if ((IVar2 & 1) == 0) {
        IVar3 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pages_026c52a0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(IVar3);
      }
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_wcr_persistPages_026c52f0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

