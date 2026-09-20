// FUN_011399d0 @ 011399d0

void FUN_011399d0(undefined8 param_1,byte param_2,byte param_3)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *local_68;
  long local_30;
  byte local_22;
  byte local_21;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_22 = param_3;
  local_21 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_18 = 0;
  }
  else {
    if ((local_21 & 1) == 0) {
      local_68 = &cf__i;
      if ((local_22 & 1) == 0) {
        local_68 = &cf__o;
      }
    }
    else {
      local_68 = &cf__b;
    }
    lVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stringByAppendingString__0269d398,local_68)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_18 = lVar2;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

