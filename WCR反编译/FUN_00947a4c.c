// FUN_00947a4c @ 00947a4c

void FUN_00947a4c(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_48;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_text);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar4 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = ((ulong)pcVar4 & 1) == 0;
  if (bVar1) {
    local_48 = &cf___;
  }
  else {
    local_48 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_objectForKeyedSubscript__0269d098,&cf_text)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_28 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_48;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_28);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(puVar3);
  return;
}

