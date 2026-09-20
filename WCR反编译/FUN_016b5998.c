// FUN_016b5998 @ 016b5998

void FUN_016b5998(byte param_1,byte param_2)

{
  undefined *puVar1;
  undefined *local_20;
  byte local_12;
  byte local_11;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  local_12 = param_2;
  local_11 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_20 = puVar1;
  if ((local_11 & 1) == 0) {
    if ((local_12 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,&cf_Other_Light);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,&cf_Other);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,&cf_Other_dark);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,&cf_Other_Dark);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,&cf_Other);
    }
  }
  else if ((local_12 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,&cf_Me_Light);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,&cf_Me);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,&cf_Me_dark);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,&cf_Me_Dark);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,&cf_Me);
  }
  puVar1 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

