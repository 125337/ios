// FUN_020a0d88 @ 020a0d88

void FUN_020a0d88(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_count_0269cfe0);
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_zzr_g);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  else if (lVar1 == 1) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

