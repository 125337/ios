// FUN_020216e0 @ 020216e0

void FUN_020216e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == (cfstringStruct *)0x0) {
    local_48 = &cf___;
  }
  else {
    local_48 = local_18;
  }
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_28 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(local_48);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = local_20;
  }
  else {
    local_68 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_68);
  return;
}

