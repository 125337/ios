// FUN_00116ee4 @ 00116ee4

void FUN_00116ee4(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_40;
  undefined4 local_38;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_0010ee50();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (((pcVar1 == (cfstringStruct *)0x0) ||
      (pcVar1 = local_28,
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__),
      ((ulong)pcVar1 & 1) != 0)) ||
     (pcVar1 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_<),
     ((ulong)pcVar1 & 1) != 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_38 = 1;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__);
    if ((((ulong)pcVar1 & 1) == 0) ||
       (pcVar1 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf__O),
       ((ulong)pcVar1 & 1) != 0)) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf___;
      local_38 = 1;
    }
    else {
      pcVar1 = local_28;
      FUN_00112698(local_28,&cf___,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_40 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
      if ((pcVar1 == (cfstringStruct *)0x0) ||
         ((pcVar1 = local_40, FUN_00112b1c(), ((ulong)pcVar1 & 1) != 0 ||
          (pcVar1 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf__O),
          ((ulong)pcVar1 & 1) != 0)))) {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf___;
      }
      else {
        pcVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_format_s_)
        ;
        if (((((ulong)pcVar1 & 1) == 0) &&
            (pcVar1 = local_40,
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_kbc),
            ((ulong)pcVar1 & 1) == 0)) &&
           (pcVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0)
           , pcVar1 = local_40, pcVar2 < (cfstringStruct *)0x41)) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf___;
        }
      }
      local_38 = 1;
      _objc_storeStrong(&local_40,0);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

