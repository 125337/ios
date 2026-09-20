// douyinHydratePageURLWithAwemeID:sourceURL:resolvedURL: @ 010367c8

/* Function Stack Size: 0x28 bytes */

ID WCRefineLinkParser::douyinHydratePageURLWithAwemeID_sourceURL_resolvedURL_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  long lVar1;
  ID IVar2;
  undefined *puVar3;
  uint local_5c;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_4);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_5);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_douyinURLIsImageNote__026ade98,local_40);
    local_5c = 1;
    if ((IVar2 & 1) == 0) {
      IVar2 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_douyinURLIsImageNote__026ade98,local_38);
      local_5c = (uint)IVar2;
    }
    if ((local_5c & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_https___www_douyin_com_video___);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar3;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_https___www_douyin_com_note___);
      _objc_retainAutoreleasedReturnValue();
      local_18 = puVar3;
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

