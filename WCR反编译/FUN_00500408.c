// FUN_00500408 @ 00500408

byte FUN_00500408(double param_1,undefined8 param_2)

{
  cfstringStruct **ppcVar1;
  cfstringStruct **ppcVar2;
  undefined *puVar3;
  double dVar4;
  cfstringStruct *local_48;
  cfstringStruct **local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  ppcVar1 = &local_20;
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(ppcVar1,param_2);
  FUN_00502994();
  _objc_retainAutoreleasedReturnValue();
  if (local_20 == (cfstringStruct *)0x0) {
    local_48 = &cf___;
  }
  else {
    local_48 = local_20;
  }
  ppcVar2 = ppcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(ppcVar1,PTR_s_objectForKeyedSubscript__0269d098,local_48);
  _objc_retainAutoreleasedReturnValue();
  local_28 = ppcVar2;
  (*(code *)PTR__objc_release_02578630)(ppcVar1);
  ppcVar1 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(ppcVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((ulong)ppcVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    dVar4 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_doubleValue_026ca608);
    local_11 = param_1 - dVar4 < 15.0;
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

