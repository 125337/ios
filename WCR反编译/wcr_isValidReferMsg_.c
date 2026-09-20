// wcr_isValidReferMsg: @ 009da39c

/* Function Stack Size: 0x18 bytes */

bool WCRefineAnonymousAtHelper::wcr_isValidReferMsg_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = false;
  }
  else {
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_n64MesSvrID);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    local_11 = lVar2 != 0;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

