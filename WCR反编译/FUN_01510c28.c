// FUN_01510c28 @ 01510c28

/* WARNING: Type propagation algorithm not settling */

void FUN_01510c28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_30;
  long local_28 [3];
  
  local_28[2] = 0;
  _objc_storeStrong(local_28 + 2,param_1);
  local_28[1] = 0;
  _objc_storeStrong(local_28 + 1,param_2);
  lVar2 = local_28[2];
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_28[0] = lVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  lVar2 = local_28[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_28[0],PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    _objc_storeStrong(local_28,&cf___);
  }
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_hash_0269ec90);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__lu);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(local_28,0);
  _objc_storeStrong(local_28 + 1,0);
  _objc_storeStrong(local_28 + 2,0);
  _objc_autoreleaseReturnValue(puVar1);
  return;
}

