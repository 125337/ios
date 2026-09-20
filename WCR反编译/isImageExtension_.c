// isImageExtension: @ 010d79a0

/* Function Stack Size: 0x18 bytes */

bool WCRefineNameplateHelper::isImageExtension_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  byte local_44;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,&cf_png);
    local_44 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_jpg);
      local_44 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_jpeg);
        local_44 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_gif);
          local_44 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_webp)
            ;
            local_44 = 1;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_isEqualToString__0269ccc8,&cf_heic);
              local_44 = 1;
              if ((uVar1 & 1) == 0) {
                uVar1 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_isEqualToString__0269ccc8,&cf_bmp);
                local_44 = (byte)uVar1;
              }
            }
          }
        }
      }
    }
    local_11 = local_44 & 1;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

