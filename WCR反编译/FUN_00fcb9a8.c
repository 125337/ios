// FUN_00fcb9a8 @ 00fcb9a8

void FUN_00fcb9a8(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_30;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_30 = &cf___;
  }
  else {
    local_30 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__,&cf__amp_);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_20 = local_30;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_<,&cf__lt_);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_20 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf_>,&cf__gt_);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_20 = pcVar3;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

