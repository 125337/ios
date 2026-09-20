// FUN_0152eb20 @ 0152eb20

void FUN_0152eb20(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  long local_30;
  undefined4 local_24;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    lVar1 = local_20;
    FUN_01533df4(local_20,PTR_s_m_nsUsrName_0269d638);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_01533bf8();
    _objc_retainAutoreleasedReturnValue();
    local_30 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      lVar2 = local_20;
      FUN_01533eb8(local_20,&cf_m_nsUsrName);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = local_30;
      local_30 = lVar2;
      (*(code *)PTR__objc_release_02578630)(lVar1);
    }
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
    if (lVar1 == 0) {
      pcVar3 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_ptr__p);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    else {
      pcVar3 = &cf_wxid_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_wxid_,PTR_s_stringByAppendingString__0269d398,local_30);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

