// FUN_01bef094 @ 01bef094

void FUN_01bef094(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_30;
  undefined4 local_24;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_content_026a4a90);
    _objc_retainAutoreleasedReturnValue();
    local_30 = pcVar1;
    if ((pcVar1 == (cfstringStruct *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0),
       pcVar1 == (cfstringStruct *)0x0)) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_imageArray_026a54a8);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_sightDraft_026a4d98);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_release_02578630)();
        if (pcVar1 == (cfstringStruct *)0x0) {
          _objc_storeStrong(&local_30,&cf__);
        }
        else {
          _objc_storeStrong(&local_30,&cf__);
        }
      }
      else {
        pcVar3 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_imageArray_026a54a8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_stringWithFormat__0269cca8,&cf__);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_30;
        local_30 = pcVar1;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
      }
    }
    pcVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

