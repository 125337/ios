// FUN_0068bc9c @ 0068bc9c

void FUN_0068bc9c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar3 = local_20;
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  pcVar4 = local_20;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = local_20;
    FUN_0067d980();
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar3;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_objCType_026a64c8);
    if ((pcVar4 == (cfstringStruct *)0x0) ||
       ((iVar1 = _strcmp((char *)pcVar4,"B"), iVar1 != 0 &&
        (iVar1 = _strcmp((char *)pcVar4,"c"), iVar1 != 0)))) {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_stringValue_0269ef08);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
    }
    else {
      pcVar3 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_boolValue_026ca540);
      local_18 = &cf_true;
      if (((ulong)pcVar3 & 1) == 0) {
        local_18 = &cf_false;
      }
      (*(code *)PTR__objc_retain_02578638)();
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

