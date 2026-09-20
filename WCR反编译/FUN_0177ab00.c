// FUN_0177ab00 @ 0177ab00

void FUN_0177ab00(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_0176d368();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isEqualToString__0269ccc8,&cf_appearance);
  if ((((ulong)pcVar1 & 1) == 0) &&
     (pcVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__S),
     ((ulong)pcVar1 & 1) == 0)) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_functions);
    if ((((ulong)pcVar1 & 1) == 0) &&
       (pcVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_R),
       ((ulong)pcVar1 & 1) == 0)) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_custom);
      if ((((ulong)pcVar1 & 1) == 0) &&
         (pcVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf__6R),
         local_18 = local_28, ((ulong)pcVar1 & 1) == 0)) {
        (*(code *)PTR__objc_retain_02578638)();
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_custom;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_functions;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_appearance;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

