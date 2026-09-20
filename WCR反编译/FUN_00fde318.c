// FUN_00fde318 @ 00fde318

void FUN_00fde318(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_40;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_40 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_40;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__png);
  if ((((((ulong)pcVar1 & 1) == 0) &&
       (pcVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__jpg),
       ((ulong)pcVar1 & 1) == 0)) &&
      (pcVar1 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__jpeg),
      ((ulong)pcVar1 & 1) == 0)) &&
     ((pcVar1 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__webp),
      ((ulong)pcVar1 & 1) == 0 &&
      (pcVar1 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasSuffix__0269d018,&cf__gif),
      ((ulong)pcVar1 & 1) == 0)))) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_svg;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_png;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

