// FUN_0187d458 @ 0187d458

void FUN_0187d458(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  FUN_0187f490();
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_jpeg);
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_png);
    if ((((((ulong)pcVar1 & 1) == 0) &&
         (pcVar1 = local_28,
         (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_jpg),
         ((ulong)pcVar1 & 1) == 0)) &&
        (pcVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_gif),
        ((ulong)pcVar1 & 1) == 0)) &&
       ((pcVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_bmp),
        ((ulong)pcVar1 & 1) == 0 &&
        (pcVar1 = local_28,
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_webp),
        ((ulong)pcVar1 & 1) == 0)))) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_qt);
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_mp4);
        if (((((ulong)pcVar1 & 1) == 0) &&
            (pcVar1 = local_28,
            (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_mov),
            ((ulong)pcVar1 & 1) == 0)) &&
           (pcVar1 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_m4v),
           ((ulong)pcVar1 & 1) == 0)) {
          local_18 = (cfstringStruct *)0x0;
        }
        else {
          pcVar1 = local_28;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar1;
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_mov;
      }
    }
    else {
      pcVar1 = local_28;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar1;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_jpg;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

