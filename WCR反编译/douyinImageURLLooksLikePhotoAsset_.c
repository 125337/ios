// douyinImageURLLooksLikePhotoAsset: @ 01033828

/* Function Stack Size: 0x18 bytes */

bool WCRefineLinkParser::douyinImageURLLooksLikePhotoAsset_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  uint local_6c;
  uint local_5c;
  cfstringStruct *local_58;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = (cfstringStruct *)0x0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_douyinImageURLLooksLikeJunkAsset_026adef0,local_30);
  if ((IVar1 & 1) == 0) {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_58 = &::cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_58;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__obj_);
    local_5c = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_weboff);
      local_5c = 1;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_tplv_obj);
        local_5c = 1;
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_containsString__0269d0b0,&cf_download);
          local_5c = 1;
          if (((ulong)pcVar2 & 1) == 0) {
            pcVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_containsString__0269d0b0,&cf_origin);
            local_5c = 1;
            if (((ulong)pcVar2 & 1) == 0) {
              pcVar2 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_containsString__0269d0b0,&cf_tos_cn_);
              local_5c = 1;
              if (((ulong)pcVar2 & 1) == 0) {
                pcVar2 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_containsString__0269d0b0,&cf_tos_byteimg);
                local_5c = (uint)pcVar2;
              }
            }
          }
        }
      }
    }
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__jpg);
    local_6c = 1;
    if (((ulong)pcVar2 & 1) == 0) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__jpeg);
      local_6c = 1;
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__heic);
        local_6c = 1;
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__webp);
          local_6c = (uint)pcVar2;
        }
      }
    }
    if (((local_5c & 1) == 0) ||
       (((local_6c & 1) == 0 &&
        (pcVar2 = local_40,
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__tplv_),
        ((ulong)pcVar2 & 1) == 0)))) {
      pcVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_containsString__0269d0b0,&cf_douyinpic_com);
      if (((((ulong)pcVar2 & 1) == 0) &&
          (pcVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_containsString__0269d0b0,&cf_byteimg_com),
          ((ulong)pcVar2 & 1) == 0)) ||
         (((pcVar2 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__jpg),
           ((ulong)pcVar2 & 1) == 0 &&
           (pcVar2 = local_40,
           (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__jpeg),
           ((ulong)pcVar2 & 1) == 0)) &&
          (pcVar2 = local_40,
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf__heic),
          ((ulong)pcVar2 & 1) == 0)))) {
        local_11 = 0;
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    local_11 = 0;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

