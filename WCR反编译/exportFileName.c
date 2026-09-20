// exportFileName @ 00fd26dc

/* Function Stack Size: 0x10 bytes */

ID WCRefineIconNameCaptureItem::exportFileName(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_name_0269d828);
  _objc_retainAutoreleasedReturnValue();
  local_50 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_50;
  (*(code *)PTR__objc_release_02578630)(param_1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_hasSuffix__0269d018,&cf__svg);
  if ((((((ulong)pcVar1 & 1) == 0) &&
       (pcVar1 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__png),
       ((ulong)pcVar1 & 1) == 0)) &&
      (pcVar1 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__jpg),
      ((ulong)pcVar1 & 1) == 0)) &&
     ((pcVar1 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__jpeg),
      ((ulong)pcVar1 & 1) == 0 &&
      (pcVar1 = local_38,
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasSuffix__0269d018,&cf__webp),
      ((ulong)pcVar1 & 1) == 0)))) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_kind_026a27e8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if ((IVar3 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_stringByAppendingString__0269d398,&cf__png);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
    else {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_stringByAppendingString__0269d398,&cf__svg);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar1;
    }
  }
  else {
    pcVar1 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = pcVar1;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

