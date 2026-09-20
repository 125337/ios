// FUN_0092f0a4 @ 0092f0a4

void FUN_0092f0a4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_70;
  cfstringStruct *local_18;
  
  pcVar1 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
  FUN_0092e280();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_stringWithContentsOfFile_encodin_026a3340,param_1,4,0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = pcVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
  pcVar1 = local_18;
  if ((cfstringStruct *)0x8000 < pcVar2) {
    pcVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_substringFromIndex__0269d120,pcVar2 + -0x400)
    ;
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_18;
    local_18 = pcVar1;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  if (local_18 == (cfstringStruct *)0x0) {
    local_70 = &cf___;
  }
  else {
    local_70 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_70);
  return;
}

