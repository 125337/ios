// FUN_002e5e10 @ 002e5e10

byte FUN_002e5e10(undefined8 param_1)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  byte local_70;
  cfstringStruct *local_58;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  byte local_11;
  
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_1);
  pcVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_58;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_emoji);
    local_70 = 1;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_symbol);
      local_70 = 1;
      if (((ulong)pcVar1 & 1) == 0) {
        pcVar1 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_icon);
        local_70 = 1;
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsString__0269d0b0,&cf_dingbat)
          ;
          local_70 = 1;
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_28;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_28,PTR_s_containsString__0269d0b0,&cf_awesome);
            local_70 = 1;
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_28;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_s_containsString__0269d0b0,&cf_material);
              local_70 = 1;
              if (((ulong)pcVar1 & 1) == 0) {
                pcVar1 = local_28;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_28,PTR_s_containsString__0269d0b0,&cf_wechaticons);
                local_70 = 1;
                if (((ulong)pcVar1 & 1) == 0) {
                  pcVar1 = local_28;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_28,PTR_s_containsString__0269d0b0,&cf_sfproicons);
                  local_70 = 1;
                  if (((ulong)pcVar1 & 1) == 0) {
                    pcVar1 = local_28;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_28,PTR_s_containsString__0269d0b0,&cf_lastresort);
                    local_70 = (byte)pcVar1;
                  }
                }
              }
            }
          }
        }
      }
    }
    local_11 = local_70 & 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

