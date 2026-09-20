// FUN_01ce0578 @ 01ce0578

void FUN_01ce0578(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_38;
  undefined4 local_2c;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_01ce1b34();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  local_18 = local_28;
  if (pcVar1 == (cfstringStruct *)0x0) {
    pcVar1 = local_20;
    FUN_01ce8ae8(0);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_qt);
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_mp4);
      if ((((((ulong)pcVar1 & 1) == 0) &&
           (pcVar1 = local_38,
           (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_mov),
           ((ulong)pcVar1 & 1) == 0)) &&
          (pcVar1 = local_38,
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_m4v),
          ((ulong)pcVar1 & 1) == 0)) &&
         ((pcVar1 = local_38,
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_html),
          ((ulong)pcVar1 & 1) == 0 &&
          (pcVar1 = local_38,
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_htm),
          ((ulong)pcVar1 & 1) == 0)))) {
        local_18 = (cfstringStruct *)0x0;
      }
      else {
        pcVar1 = local_38;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar1;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_mov;
    }
    local_2c = 1;
    _objc_storeStrong(&local_38,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_2c = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

