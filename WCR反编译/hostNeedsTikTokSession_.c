// hostNeedsTikTokSession: @ 010182f8

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::hostNeedsTikTokSession_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  uint local_44;
  cfstringStruct *local_40;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  pcVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_40 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_40;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_tiktok);
  local_44 = 1;
  if (((ulong)pcVar1 & 1) == 0) {
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_tiktokcdn);
    local_44 = 1;
    if (((ulong)pcVar1 & 1) == 0) {
      pcVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_containsString__0269d0b0,&cf_ttwstatic);
      local_44 = (uint)pcVar1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_44 & 1;
}

