// FUN_00ec384c @ 00ec384c

byte FUN_00ec384c(undefined8 param_1)

{
  ulong uVar1;
  byte local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_11 = 0;
  }
  else {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf__);
    local_28 = 1;
    if ((uVar1 & 1) == 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_image_);
      local_28 = 1;
      if ((uVar1 & 1) == 0) {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_hasPrefix__0269d320,&cf_imagepair_);
        local_28 = 1;
        if ((uVar1 & 1) == 0) {
          uVar1 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_containsString__0269d0b0,&cf__PluginIcons_);
          local_28 = 1;
          if ((uVar1 & 1) == 0) {
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_containsString__0269d0b0,&cf__SuperFloat_icon_);
            local_28 = (byte)uVar1;
          }
        }
      }
    }
    local_11 = local_28 & 1;
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

