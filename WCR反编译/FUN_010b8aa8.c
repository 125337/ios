// FUN_010b8aa8 @ 010b8aa8

void FUN_010b8aa8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  cfstringStruct *local_50;
  cfstringStruct *local_30;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  bVar1 = false;
  if (lVar2 != 0) {
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      local_50 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_30 = local_50;
      goto LAB_010b8ba8;
    }
  }
  local_50 = &cf___;
LAB_010b8ba8:
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_50;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

