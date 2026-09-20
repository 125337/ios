// FUN_00f176c8 @ 00f176c8

int FUN_00f176c8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_20;
  int local_14;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_14 = 0;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_uiAppMsgInnerType_026a14f0);
    local_14 = (int)lVar1;
    if (local_14 == 0) {
      lVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_valueForKey__0269d128,&cf_m_uiAppMsgInnerType);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      local_14 = (int)lVar2;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_14;
}

