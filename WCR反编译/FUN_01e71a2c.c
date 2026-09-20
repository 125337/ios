// FUN_01e71a2c @ 01e71a2c

void FUN_01e71a2c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_28;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 == (cfstringStruct *)0x0) {
    local_28 = &cf___;
  }
  else {
    local_28 = local_18;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,PTR_s_decimalDigitCharacterSet_026a5190);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_componentsSeparatedByCharactersI_0269d1a8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(local_28);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar3);
  return;
}

