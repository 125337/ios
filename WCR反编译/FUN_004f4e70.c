// FUN_004f4e70 @ 004f4e70

void FUN_004f4e70(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_88;
  cfstringStruct *local_50;
  cfstringStruct *local_40 [3];
  undefined *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_50 = &cf___;
  }
  else {
    local_50 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_50;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_URLQueryAllowedCharacterSet_0269d8f8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_removeCharactersInString__0269ef98,&cf____);
  pcVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_stringByAddingPercentEncodingWit_0269d900,local_28);
  _objc_retainAutoreleasedReturnValue();
  local_88 = pcVar3;
  if (pcVar3 == (cfstringStruct *)0x0) {
    local_88 = &cf___;
  }
  local_40[0] = pcVar3;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_88);
  return;
}

