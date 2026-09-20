// douyinJSONObjectIfEmbedded: @ 0101e314

/* Function Stack Size: 0x18 bytes */

ID WCRefineLinkParser::douyinJSONObjectIfEmbedded_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  uint local_60;
  uint local_5c;
  ulong local_40;
  undefined4 local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_30;
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
    local_34 = 1;
    goto LAB_0101e61c;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_length_0269cca0);
  if (uVar3 < 0x28) {
    local_18 = 0;
  }
  else {
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__7B);
    local_5c = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__5B);
      local_5c = (uint)uVar2;
    }
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&cf__);
    local_60 = 1;
    if ((uVar2 & 1) == 0) {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&::cf__);
      local_60 = (uint)uVar2;
    }
    if (((local_5c & 1) == 0) && ((local_60 & 1) == 0)) {
      local_18 = 0;
    }
    else {
      uVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_image_post);
      if ((uVar2 & 1) == 0) {
        uVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_containsString__0269d0b0,&cf_imagePost)
        ;
        if ((uVar2 & 1) == 0) {
          uVar2 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_containsString__0269d0b0,&cf_download_url_list);
          if ((uVar2 & 1) == 0) {
            uVar2 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_40,PTR_s_containsString__0269d0b0,&cf_downloadUrlList);
            if ((uVar2 & 1) == 0) {
              uVar2 = local_40;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_40,PTR_s_containsString__0269d0b0,&cf_aweme_id);
              if ((uVar2 & 1) == 0) {
                uVar2 = local_40;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_containsString__0269d0b0,&cf_awemeId);
                if ((uVar2 & 1) == 0) {
                  local_18 = 0;
                  goto LAB_0101e60c;
                }
              }
            }
          }
        }
      }
      IVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_JSONObjectFromDouyinEmbeddedText_026adce0,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_18 = IVar4;
    }
  }
LAB_0101e60c:
  local_34 = 1;
  _objc_storeStrong(&local_40,0);
LAB_0101e61c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

