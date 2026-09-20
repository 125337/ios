// douyinURLLooksUnsignedSyntheticPlay: @ 010220e4

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::douyinURLLooksUnsignedSyntheticPlay_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  cfstringStruct *local_60;
  cfstringStruct *local_50;
  long local_48;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  bool local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
  _objc_retainAutoreleasedReturnValue();
  local_60 = pcVar1;
  if (pcVar1 == (cfstringStruct *)0x0) {
    local_60 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_60;
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_containsString__0269d0b0,&cf_aweme_snssdk_com_aweme_v1_play_);
  if ((((ulong)pcVar1 & 1) == 0) &&
     (pcVar1 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_38,PTR_s_containsString__0269d0b0,&cf_iesdouyin_com_aweme_v1_play_),
     ((ulong)pcVar1 & 1) == 0)) {
    local_11 = false;
  }
  else {
    pcVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_containsString__0269d0b0,&cf_playwm);
    if (((ulong)pcVar1 & 1) == 0) {
      local_48 = 0;
      for (local_50 = (cfstringStruct *)0x0; pcVar1 = local_38,
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0), local_50 < pcVar1;
          local_50 = (cfstringStruct *)((long)&local_50->field0_0x0 + 1)) {
        pcVar1 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_characterAtIndex__0269fa18,local_50);
        if ((int)pcVar1 == 0x26) {
          local_48 = local_48 + 1;
        }
      }
      local_11 = local_48 < 3;
    }
    else {
      local_11 = true;
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

