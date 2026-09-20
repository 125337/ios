// FUN_0007627c @ 0007627c

byte FUN_0007627c(undefined8 param_1)

{
  ulong uVar1;
  byte local_50;
  ulong local_38;
  undefined4 local_30;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_30 = 1;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_png);
    local_50 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_jpg);
      local_50 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_jpeg);
        local_50 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_gif);
          local_50 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_webp)
            ;
            local_50 = 1;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_isEqualToString__0269ccc8,&cf_heic);
              local_50 = 1;
              if ((uVar1 & 1) == 0) {
                uVar1 = local_38;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_38,PTR_s_isEqualToString__0269ccc8,&cf_bmp);
                local_50 = (byte)uVar1;
              }
            }
          }
        }
      }
    }
    local_11 = local_50 & 1;
    local_30 = 1;
    _objc_storeStrong(&local_38,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

