// FUN_009477e4 @ 009477e4

void FUN_009477e4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_VGr;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_size_026cab00);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scale_026ca830);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_size_026cab00);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_scale_026ca830);
    pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

