// tikTokURLIsContentCDN: @ 010592f4

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::tikTokURLIsContentCDN_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_50 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_50;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_11 = 0;
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_ttwstatic_com)
    ;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__static_);
      if (((((ulong)pcVar1 & 1) == 0) &&
          (pcVar1 = local_38,
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__login_)
          , ((ulong)pcVar1 & 1) == 0)) &&
         (pcVar1 = local_38,
         (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf__login),
         ((ulong)pcVar1 & 1) == 0)) {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_tiktokcdn)
        ;
        if (((ulong)pcVar1 & 1) == 0) {
          pcVar1 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_containsString__0269d0b0,&cf_tiktokv_);
          if (((ulong)pcVar1 & 1) == 0) {
            pcVar1 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_containsString__0269d0b0,&cf__video_tos_);
            if (((ulong)pcVar1 & 1) == 0) {
              pcVar1 = local_38;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_38,PTR_s_containsString__0269d0b0,&cf_webapp_prime);
              if (((ulong)pcVar1 & 1) == 0) {
                local_11 = 0;
              }
              else {
                local_11 = 1;
              }
            }
            else {
              local_11 = 1;
            }
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 0;
      }
    }
    else {
      local_11 = 0;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

