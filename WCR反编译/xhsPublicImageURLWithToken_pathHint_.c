// xhsPublicImageURLWithToken:pathHint: @ 01021274

/* Function Stack Size: 0x20 bytes */

ID WCRefineLinkParser::xhsPublicImageURLWithToken_pathHint_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_88;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_38,param_4);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_18 = (undefined *)0x0;
    local_3c = 1;
  }
  else {
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_88 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_88;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_containsString__0269d0b0,&cf_notes_pre_post_);
    bVar1 = false;
    local_69 = false;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_containsString__0269d0b0,&cf_spectrum_);
      local_69 = ((ulong)pcVar2 & 1) == 0;
      if (local_69) {
        local_a0 = local_30;
      }
      else {
        local_a0 = &cf_spectrum_;
        (*(code *)PTR__objc_msgSend_02578628)
                  (&cf_spectrum_,PTR_s_stringByAppendingString__0269d398,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_a0;
      }
      local_69 = !local_69;
      local_98 = local_a0;
    }
    else {
      local_98 = &cf_notes_pre_post_;
      (*(code *)PTR__objc_msgSend_02578628)
                (&cf_notes_pre_post_,PTR_s_stringByAppendingString__0269d398,local_30);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_58 = local_98;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_98;
    if (local_69) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf_https___sns_img_hw_xhscdn_com____imageView2_2_w_format_png);
    _objc_retainAutoreleasedReturnValue();
    local_3c = 1;
    local_18 = puVar3;
    _objc_storeStrong(&local_50);
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

