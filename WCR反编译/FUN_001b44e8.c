// FUN_001b44e8 @ 001b44e8

void FUN_001b44e8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long local_58 [5];
  long local_30;
  undefined4 local_24;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    local_30 = 0;
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_valueForKey__0269d128,&cf_contactsItemView)
    ;
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_30 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_30 == 0) {
      lVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_valueForKey__0269d128,&cf_m_contactsItemView);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    if (local_30 == 0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      local_58[0] = 0;
      lVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_contact);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_58[0];
      local_58[0] = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
      lVar1 = local_58[0];
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = lVar1;
      local_24 = 1;
      _objc_storeStrong(local_58,0);
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

