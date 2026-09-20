// FUN_00546750 @ 00546750

void FUN_00546750(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long local_40;
  undefined4 local_38;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_00550aa0(local_20,&cf_tid);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    lVar1 = local_20;
    FUN_00550aa0(0,local_20,&cf_username);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      lVar2 = local_20;
      FUN_00550aa0(local_20,&cf_sourceUserName);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_40;
      local_40 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar1 = local_20;
    FUN_0054fcb8();
    lVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if ((lVar2 == 0) || ((int)lVar1 == 0)) {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ptr__p);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    else {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_u____t__u)
      ;
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    local_38 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    pcVar3 = &cf_tid_;
    (*(code *)PTR__objc_msgSend_02578628)(&cf_tid_,PTR_s_stringByAppendingString__0269d398,local_28)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_38 = 1;
    local_18 = pcVar3;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

