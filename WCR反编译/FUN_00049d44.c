// FUN_00049d44 @ 00049d44

void FUN_00049d44(undefined8 param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_80;
  cfstringStruct *local_48;
  cfstringStruct *local_40 [3];
  undefined *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_URLQueryAllowedCharacterSet_0269d8f8);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_20;
  local_28 = puVar1;
  FUN_0003102c();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_80 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_80 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = local_80;
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_40[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_a0 = &cf___;
  }
  else {
    local_a0 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_WCRefineRedEnvelopSession___session___);
    _objc_retainAutoreleasedReturnValue();
    local_48 = local_a0;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_a0;
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

