// FUN_010aefd4 @ 010aefd4

void FUN_010aefd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_68;
  long local_48;
  undefined4 local_3c;
  long local_38;
  cfstringStruct *local_30;
  long local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  pcVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_68 = &cf___;
  }
  else {
    local_68 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_68;
  lVar3 = local_28;
  FUN_010aaf58();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_38 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if ((pcVar2 == (cfstringStruct *)0x0) ||
     (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
     lVar3 == 0)) {
    pcVar2 = local_30;
    FUN_010aaf58();
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = pcVar2;
  }
  else {
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_stringByAppendingString__0269d398,&cf__);
    _objc_retainAutoreleasedReturnValue();
    pcVar4 = local_30;
    local_48 = lVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_hasPrefix__0269d320,lVar3);
    pcVar2 = local_30;
    if (((ulong)pcVar4 & 1) != 0) {
      lVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_substringFromIndex__0269d120,lVar3);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_30;
      local_30 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    pcVar2 = local_30;
    FUN_010aaf58();
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = pcVar2;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

