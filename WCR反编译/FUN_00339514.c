// FUN_00339514 @ 00339514

void FUN_00339514(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long local_48;
  undefined4 local_40;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (((local_20 == 0) ||
      (lVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      lVar1 == 0)) ||
     (lVar1 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_count_0269cfe0),
     lVar1 == 0)) {
    local_18 = 0;
    local_40 = 1;
  }
  else {
    lVar1 = local_20;
    _objc_alloc_init();
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_48 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setValue_forKey__0269d300,puVar2,&cf_type);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setValue_forKey__0269d300,local_28,&cf_title);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setValue_forKey__0269d300,local_30,&cf_contactList);
    lVar1 = local_48;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = lVar1;
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

