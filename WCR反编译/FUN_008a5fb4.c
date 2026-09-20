// FUN_008a5fb4 @ 008a5fb4

void FUN_008a5fb4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_40 [3];
  long local_28;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  FUN_008a4394(local_20,PTR_s_mediaGroupKey_026a9840);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_20;
  local_28 = lVar1;
  FUN_008a4394(local_20,PTR_s_mediaGroupId_026a9848);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = lVar2;
  if ((local_28 == 0) && (lVar2 == 0)) {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_message__p);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar3;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

