// FUN_01ef0d84 @ 01ef0d84

void FUN_01ef0d84(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long local_58;
  cfstringStruct *local_48;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mutableCopy_0269d8a0);
  local_48 = *(cfstringStruct **)(param_1 + 0x20);
  if (local_48 == (cfstringStruct *)0x0) {
    local_48 = &cf___;
  }
  local_30 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar1,PTR_s_setObject_forKeyedSubscript__0269d248,local_48,&cf_html);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,&cf_storage);
  _objc_retainAutoreleasedReturnValue();
  local_58 = lVar1;
  if (lVar1 == 0) {
    local_58 = *(long *)PTR____NSDictionary0___02578288;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,local_58,&cf_storage);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_createdAt);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  lVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(lVar1);
  return;
}

