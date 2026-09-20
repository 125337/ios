// fireCompletion: @ 01be01b8

/* Function Stack Size: 0x14 bytes */

void WCRefineMomentsCacheKeepUsersViewController::fireCompletion_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_didFireCompletion_026c0908);
  if ((param_1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setDidFireCompletion__026c0910,1);
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_completion_0269fb98);
    _objc_retainAutoreleasedReturnValue();
    local_30 = IVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setCompletion__0269fdc8,0);
    if (local_30 != 0) {
      (**(code **)(local_30 + 0x10))(local_30,local_21 & 1);
    }
    _objc_storeStrong(&local_30,0);
  }
  return;
}

