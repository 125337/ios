// FUN_00778378 @ 00778378

uint FUN_00778378(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  uint local_5c;
  cfstringStruct *local_48;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  pcVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_48 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_20 = local_48;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_zip);
  local_5c = 1;
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_png);
    local_5c = 1;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_jpg);
      local_5c = 1;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_jpeg);
        local_5c = 1;
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_gif);
          local_5c = 1;
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isEqualToString__0269ccc8,&cf_webp)
            ;
            local_5c = 1;
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_isEqualToString__0269ccc8,&cf_heic);
              local_5c = 1;
              if (((ulong)pcVar1 & 1) == 0) {
                pcVar1 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_isEqualToString__0269ccc8,&cf_bmp);
                local_5c = (uint)pcVar1;
              }
            }
          }
        }
      }
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return local_5c & 1;
}

